#include "Ball.h"
#include "Graphics.h"
#include "Vec2.h"

Ball::Ball(const Vec2& _pos, const Vec2& _vel)
	: pos(_pos), vel(_vel) { }

void Ball::Draw(Graphics& gfx)
{
	// centered draw of a 14x14 ball sprite

	const int x = int(pos.x) - 7;
	const int y = int(pos.y) - 7;

	gfx.PutPixel(5 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(6 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(7 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(8 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(4 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(5 + x, 1 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 1 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 1 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 1 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(10 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 2 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 2 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 2 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 2 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 2 + y, 248, 200, 72);
	gfx.PutPixel(11 + x, 2 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 3 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 3 + y, 248, 248, 248);
	gfx.PutPixel(5 + x, 3 + y, 248, 248, 248);
	gfx.PutPixel(6 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 3 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 3 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 3 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 3 + y, 200, 168, 72);
	gfx.PutPixel(11 + x, 3 + y, 200, 168, 72);
	gfx.PutPixel(12 + x, 3 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 4 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 4 + y, 248, 248, 248);
	gfx.PutPixel(5 + x, 4 + y, 248, 248, 248);
	gfx.PutPixel(6 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 4 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 4 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 4 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 4 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 4 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 4 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 5 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(2 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 5 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 5 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 5 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 5 + y, 200, 168, 72);
	gfx.PutPixel(13 + x, 5 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 6 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(2 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 6 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(13 + x, 6 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 7 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(2 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(5 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 7 + y, 248, 248, 248);
	gfx.PutPixel(7 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(13 + x, 7 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 8 + y, 128, 88, 0);
	gfx.PutPixel(1 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(2 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(3 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(5 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 8 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 8 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(13 + x, 8 + y, 128, 88, 0);
	gfx.PutPixel(1 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(2 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(3 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(4 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(5 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(6 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(7 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(12 + x, 9 + y, 192, 152, 56);
	gfx.PutPixel(1 + x, 10 + y, 128, 88, 0);
	gfx.PutPixel(2 + x, 10 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(4 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(5 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(6 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(7 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(9 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(11 + x, 10 + y, 248, 200, 72);
	gfx.PutPixel(12 + x, 10 + y, 128, 88, 0);
	gfx.PutPixel(2 + x, 11 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 11 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 11 + y, 200, 168, 72);
	gfx.PutPixel(5 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(6 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(7 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(8 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(9 + x, 11 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 11 + y, 248, 200, 72);
	gfx.PutPixel(11 + x, 11 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 12 + y, 48, 48, 48);
	gfx.PutPixel(4 + x, 12 + y, 152, 112, 16);
	gfx.PutPixel(5 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 12 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 12 + y, 48, 48, 48);
	gfx.PutPixel(5 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(6 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(7 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(8 + x, 13 + y, 48, 48, 48);
}

void Ball::Update(float dt)
{
	pos += vel * dt;
}

bool Ball::DoWallCollision(const RectF& walls)
{
	//We change a coordinate's sign if the ball collides with a wall
	bool collided = false;
	const RectF rect = GetRect();
	if (rect.left < walls.left)
	{
		pos.x += walls.left - rect.left; //When the ball is out of bounds, move it so that it returns in bounds
		ReboundX();
		collided = true;
	}
	if (rect.right > walls.right)
	{
		pos.x -= rect.right - walls.right; //When the ball is out of bounds, move it so that it returns in bounds
		ReboundX();
		collided = true;
	}
	if (rect.top < walls.top)
	{
		pos.y += walls.top - rect.top; //When the ball is out of bounds, move it so that it returns in bounds
		ReboundY();
		collided = true;
	}
	if (rect.bottom > walls.bottom)
	{
		pos.y -= rect.bottom - walls.bottom; //When the ball is out of bounds, move it so that it returns in bounds
		ReboundY();
		collided = true;
	}
	return collided;
}

void Ball::ReboundX()
{
	vel.x = -vel.x;
}

void Ball::ReboundY()
{
	vel.y = -vel.y;
}

RectF Ball::GetRect() const
{
	return RectF::FromCenter(pos, radius, radius);
}

Vec2 Ball::GetVelocity() const
{

	return vel;
}
