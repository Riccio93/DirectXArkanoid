#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Colors.h"
#include "Ball.h"

class Brick
{
public:
	Brick() = default;
	Brick(const RectF& _rect, Color _color);
	void Draw(Graphics& gfx) const;
	bool CheckBallCollision(const Ball& ball) const;
	void DoBallCollision(Ball& ball);
	Vec2 GetCenter() const;

private:
	static constexpr float padding = 1.f;
	RectF rect;
	Color color;
	bool isDestroyed = false;
};