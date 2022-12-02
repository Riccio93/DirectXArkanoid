#include "MainWindow.h"
#include "Game.h"

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
			bricks[index] = Brick(RectF(topLeftCorner + Vec2(x * brickWidth, y * brickHeight), brickWidth, brickHeight), colors[y]);
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

	//When the ball collides with more than 1 brick, only the closest one gets destroyed
	bool collisionHappened = false;
	float currentCollisionDistanceSq = FLT_MAX;
	int currentCollisionBrickIndex = INT_MAX;
	for (int i = 0; i < numBricks; i++)
	{
		if (bricks[i].CheckBallCollision(ball))
		{
			const float newCollisionDistanceSq = (ball.GetPosition() - bricks[i].GetCenter()).GetLengthSq();
			if (collisionHappened)
			{
				if (newCollisionDistanceSq < currentCollisionDistanceSq)
				{
					currentCollisionDistanceSq = newCollisionDistanceSq;
					currentCollisionBrickIndex = i;
				}
			}
			else
			{
				currentCollisionBrickIndex = i;
				currentCollisionDistanceSq = newCollisionDistanceSq;
				collisionHappened = true;
			}
		}
	}
	if (collisionHappened)
	{
		bricks[currentCollisionBrickIndex].DoBallCollision(ball);
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
