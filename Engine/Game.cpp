#include "MainWindow.h"
#include "Game.h"
#include "Brick.h"
#include "Ball.h"

Game::Game(MainWindow& wnd)
	: wnd(wnd), gfx(wnd),
	ball(Vec2(300.f, 300.f), Vec2(300.f, 300.f)),
	walls(0.f, float(gfx.ScreenWidth), 0.f, float(gfx.ScreenHeight)),
	paddle(Vec2(400.f, 500.f), 50.f, 15.f)
{
	//Making bricks grid
	const Color colors[numBricksDown] = { Colors::Red, Colors::Green, Colors::Blue, Colors::Cyan };
	int index = 0;
	for (int y = 0; y < numBricksDown; y++)
	{
		for (int x = 0; x - numBricksAcross; x++)
		{
			bricks[index] = Brick(RectF(Vec2(0.f, 0.f) + Vec2(x * brickWidth, y * brickHeight), brickWidth, brickHeight), colors[y]);
			index++;
		}
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	const float dt = ft.Mark();
	ball.Update(dt);
	paddle.Update(wnd.kbd, dt);
	for (Brick& brick : bricks)
	{
		if(brick.DoBallCollision(ball))
			break; //If we find a collision there's no need to check every other brick in this frame
	}
	paddle.DoBallCollision(ball);
	paddle.DoWallCollision(walls);
	ball.DoWallCollision(walls);
}

void Game::ComposeFrame()
{
	for (const Brick& brick : bricks)
	{
		brick.Draw(gfx);
	}
	ball.Draw(gfx);
	paddle.Draw(gfx);
}
