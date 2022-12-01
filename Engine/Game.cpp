#include "MainWindow.h"
#include "Game.h"
#include "Brick.h"
#include "Ball.h"

Game::Game(MainWindow& wnd)
	: wnd(wnd), gfx(wnd),
	ball(Vec2(300.f, 300.f), Vec2(300.f, 300.f)),
	walls(0.f, float(gfx.ScreenWidth), 0.f, float(gfx.ScreenHeight)) {}

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
	ball.DoWallCollision(walls);
}

void Game::ComposeFrame()
{
	//TEST BRICK
	/*Brick brick(RectF(40.f, 100.f, 40.f, 60.f), Colors::Green);
	brick.Draw(gfx);*/
	//TEST BALL
	/*Ball ball(Vec2(100.f, 100.f), Vec2());
	ball.Draw(gfx);*/
	//TEST BALL MOVEMENT
	ball.Draw(gfx);
}
