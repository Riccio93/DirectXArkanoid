#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "FrameTimer.h"
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();

	const Vec2 topLeftCorner = Vec2(40.f, 40.f);
	static constexpr float brickWidth = 40.f;
	static constexpr float brickHeight = 24.f;
	static constexpr int numBricksAcross = 18;
	static constexpr int numBricksDown = 4;
	static constexpr int numBricks = numBricksAcross * numBricksDown;

	MainWindow& wnd;
	Graphics gfx;
	FrameTimer ft;
	Ball ball;
	Brick bricks[numBricks];
	RectF walls;
	Paddle paddle;	
};