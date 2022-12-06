#include "Brick.h"
#include <assert.h>

Brick::Brick(const RectF& _rect, Color _color) 
	: rect(_rect), color(_color) {}

void Brick::Draw(Graphics& gfx) const
{
	if(!isDestroyed)
		gfx.DrawRect(rect.GetExpandedRect(-padding), color); //Draws empty space between bricks (only visual, doesn't affect collisions!)
}

bool Brick::CheckBallCollision(const Ball& ball) const
{
	return !isDestroyed && rect.IsOverlappingWith(ball.GetRect());
}

void Brick::DoBallCollision(Ball& ball)
{
	assert(CheckBallCollision(ball));

	//Different behavior if the brick is hit from the top/bottom or the side (different coord chosen for rebound)
	if (ball.GetPosition().x >= rect.left && ball.GetPosition().x <= rect.right)
	{
		ball.ReboundY();
	}
	else
	{
		ball.ReboundX();
	}
	isDestroyed = true;
}

Vec2 Brick::GetCenter() const
{
	return rect.GetCenter();
}
