#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Graphics.h"

class Ball
{
public:
	Ball(const Vec2& _pos, const Vec2& _vel);
	void Draw(Graphics& gfx);
	void Update(float dt);
	bool DoWallCollision(const RectF& walls);
	void ReboundX();
	void ReboundY();
	RectF GetRect() const;
	Vec2 GetVelocity() const;

private:
	static constexpr float radius = 7.f;
	Vec2 pos;
	Vec2 vel;
};