#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Graphics.h"

class Ball
{
public:
	Ball(const Vec2& _pos, const Vec2& _dir);
	void Draw(Graphics& gfx);
	void Update(float dt);
	int DoWallCollision(const RectF& walls);
	void ReboundX();
	void ReboundY();
	RectF GetRect() const;
	Vec2 GetVelocity() const;
	Vec2 GetPosition() const;
	void SetDirection(const Vec2& dir);

private:
	static constexpr float radius = 7.f;
	float speed = 450.f;
	Vec2 pos;
	Vec2 vel;
};