#include "MainWindow.h"
#include "Game.h"
#include "Brick.h"
#include "Ball.h"

Game::Game(MainWindow& wnd)
	: wnd(wnd), gfx(wnd),
	ball(Vec2(300.f, 300.f), Vec2(300.f, 300.f)),
	walls(0.f, float(gfx.ScreenWidth), 0.f, float(gfx.ScreenHeight)),
	brick(RectF(450.f, 550.f, 485.f, 515.f), Colors::Red),
	paddle(Vec2(400.f, 500.f), 50.f, 15.f)
{}

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
	brick.DoBallCollision(ball);
	paddle.DoBallCollision(ball);
	paddle.DoWallCollision(walls);
	ball.DoWallCollision(walls);
}

void Game::ComposeFrame()
{
	brick.Draw(gfx);
	ball.Draw(gfx);
	paddle.Draw(gfx);
}
