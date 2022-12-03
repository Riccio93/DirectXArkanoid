#pragma once

#include "Ball.h"
#include "Colors.h"
#include "Vec2.h"
#include "Keyboard.h"

class Paddle
{
public:
	Paddle(const Vec2& _pos, float _halfWidth, float _halfheight);
	void Draw(Graphics& gfx) const;
	bool DoBallCollision(Ball& ball) const; //Collision between paddle and ball only affects the ball
	void DoWallCollision(const RectF& walls);
	void Update(const Keyboard& kb, float dt);
	RectF GetRect() const;

private:
	Color color = Colors::White;
	float halfWidth;
	float halfHeight;
	float speed = 400.f;
	Vec2 pos;
};