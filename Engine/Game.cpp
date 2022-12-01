#include "MainWindow.h"
#include "Game.h"
#include "Brick.h"

Game::Game( MainWindow& wnd )
	: wnd( wnd ), gfx( wnd ) {}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	//TEST BRICK
	/*Brick brick(RectF(40.f, 100.f, 40.f, 60.f), Colors::Green);
	brick.Draw(gfx);*/
}
