#include "Paddle.h"

Paddle::Paddle(const Vec2& _pos, float _halfWidth, float _halfheight)
	: pos(_pos), halfWidth(_halfWidth), halfHeight(_halfheight) { }

void Paddle::Draw(Graphics& gfx) const
{
	gfx.DrawRect(GetRect(), color);
}

bool Paddle::DoBallCollision(Ball& ball) const
{
	//Only consider the collision if the ball is coming from above (it will never come from below cause under the paddle is game over)
	if (ball.GetVelocity().y > 0.f && GetRect().IsOverlappingWith(ball.GetRect()))
	{
		ball.ReboundY();
			return true;
	}
	return false;
}

void Paddle::DoWallCollision(const RectF& walls)
{
	const RectF rect = GetRect();
	if (rect.left < walls.left)
		pos.x += walls.left - rect.left;
	else if (rect.right > walls.right)
		pos.x -= rect.right - walls.right;
}

void Paddle::Update(const Keyboard& kb, float dt)
{
	if(kb.KeyIsPressed(VK_LEFT))
		pos.x -= speed * dt;
	if(kb.KeyIsPressed(VK_RIGHT))
		pos.x += speed * dt;
}

RectF Paddle::GetRect() const
{
	return RectF::FromCenter(pos, halfWidth, halfHeight);
}
