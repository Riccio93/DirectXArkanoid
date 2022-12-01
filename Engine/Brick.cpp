#include "Brick.h"

Brick::Brick(const RectF& _rect, Color _color) 
	: rect(_rect), color(_color) {}

void Brick::Draw(Graphics& gfx) const
{
	if(!isDestroyed)
		gfx.DrawRect(rect, color);
}

bool Brick::DoBallCollision(Ball& ball)
{
	if (!isDestroyed && rect.IsOverlappingWith(ball.GetRect()))
	{
		ball.ReboundY();
		isDestroyed = true;
		return true;
	}
	return false;
}
