#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Colors.h"

class Brick
{
public:
	Brick(const RectF& _rect, Color _color);
	void Draw(Graphics& gfx) const;

private:
	RectF rect;
	Color color;
	bool isDestroyed = false;
};