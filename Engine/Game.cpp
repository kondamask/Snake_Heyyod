/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "SpriteCodex.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	brd( gfx ),
	snek( {12,12} ),
	rng( std::random_device()() ),
	goal(rng, brd, snek),
	highgoal(rng, brd, snek)
{
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
	if (wnd.kbd.KeyIsPressed(VK_RETURN) && gameIsPaused)
	{
		gameIsPaused = false;
	}

	if (gameIsStarted && !gameIsPaused)
	{
		if (!gameIsOver && !gameIsWon)
		{
			//MOVE THE SNAKE
			if (wnd.kbd.KeyIsPressed(VK_UP) && old_delta_loc.y != 1)
			{
				delta_loc = { 0,-1 };
			}
			if (wnd.kbd.KeyIsPressed(VK_DOWN) && old_delta_loc.y != -1)
			{
				delta_loc = { 0,1 };
			}
			if (wnd.kbd.KeyIsPressed(VK_LEFT) && old_delta_loc.x != 1)
			{
				delta_loc = { -1,0 };
			}
			if (wnd.kbd.KeyIsPressed(VK_RIGHT) && old_delta_loc.x != -1)
			{
				delta_loc = { 1,0 };
			}

			GameAdjustments();

			{
				++snekMoveCounter;
				if (snekMoveCounter >= snekPeriod)
				{
					snekMoveCounter = 0;
					Location nextHeadLoc = snek.GetNextHeadLocation(delta_loc);
					old_delta_loc = delta_loc;
					if (!brd.IsInsideBoard(nextHeadLoc) ||
						snek.HeadIsInsiteTile(nextHeadLoc))
					{
						++lostLives;
						gameIsOver = true;
					}
					else
					{
						BaseGoalBehaniour();
						HighGoalBehaviour();
					}
				}
			}

			if (snek.IsMaxSize())
			{
				gameIsWon = true;
			}
						
			//PAUSE AND UNPAUSE GAME
			if (wnd.kbd.KeyIsPressed(VK_PAUSE) && !gameIsPaused)
			{
				gameIsPaused = true;
			}
		}
		else
		{
			AskToPlayAgain();
		}
	}
	else
	{
		if (wnd.kbd.KeyIsPressed(VK_RETURN))
		{
			gameIsStarted = true;
		}
	}
}

void Game::GameAdjustments()
{
	//CHANGE SPEED AND HIGH GOAL SPAWN TIME
	{
		if (score.GetScore() >= 50)
		{
			snekPeriod = 25;
		}
		if (score.GetScore() >= 100)
		{
			snekPeriod = 20;
			highGoalSpawnPeriod = 100;
			highGoalStayPeriod = 40;
		}
		if (score.GetScore() >= 200)
		{
			snekPeriod = 15;
			highGoalSpawnPeriod = 200;
			highGoalStayPeriod = 50;
		}
		if (score.GetScore() >= 500)
		{
			snekPeriod = 10;
		}
		if (score.GetScore() >= 1000)
		{
			snekPeriod = 8;
		}
		if (score.GetScore() >= 2000)
		{
			snekPeriod = 5;
		}
	}
}

void Game::BaseGoalBehaniour()
{
	const bool eating = snek.GoalIsInTile(goal.GetLocation());
	if (eating)
	{
		snek.Grow();
		score.IncreaseScore();
	}
	snek.MoveBy(delta_loc);
	if (eating)
	{
		goal.Respawn(rng, brd, snek);
	}
}

void Game::HighGoalBehaviour()
{
	if (highGoalSpawned)
	{
		countToDespawnHighGoal++;

		const bool eatingHighGoal = snek.GoalIsInTile(highgoal.GetLocation());
		if (eatingHighGoal)
		{
			for (int i = 0; i < 2; ++i)
			{
				snek.Grow();
			}
			for (int i = 0; i < 5; ++i)
			{
				score.IncreaseScore();
			}

			countToDespawnHighGoal = 0;
			highGoalSpawned = false;
		}
		else if (countToDespawnHighGoal == highGoalStayPeriod)
		{
			countToDespawnHighGoal = 0;
			highGoalSpawned = false;
		}
	}
	else
	{
		countToSpawnHighGoal++;
		if (countToSpawnHighGoal == highGoalSpawnPeriod)
		{
			highgoal.Respawn(rng, brd, snek);
			highGoalSpawned = true;
			countToSpawnHighGoal = 0;
		}
	}
}

void Game::AskToPlayAgain()
{
	if (wnd.kbd.KeyIsPressed('C') && !gameIsWon && lostLives < 3) //CAN'T CONTINUE IF GAME IS WON OR IF I HAVE NO MORE LIVES
	{
		ResetForNewRound();
	}
	if (wnd.kbd.KeyIsPressed('R'))
	{
		ResetForNewGame();
	}
}

void Game::ResetForNewRound()
{
	gameIsOver = false;
	gameIsWon = false;

	snek.Reset({ 12, 12 });
	delta_loc = { 1,0 };

	goal.Respawn(rng, brd, snek);

	countToSpawnHighGoal = 0;
	countToSpawnHighGoal = 0;
	highGoalSpawned = false;
}

void Game::ResetForNewGame()
{
	gameIsOver = false;
	gameIsWon = false;

	snek.Reset({ 12, 12 });
	snekPeriod = 30;
	delta_loc = { 1,0 };

	goal.Respawn(rng, brd, snek);

	countToSpawnHighGoal = 0;
	countToSpawnHighGoal = 0;
	highGoalSpawned = false;

	lostLives = 0;
	score.Reset();
}

void Game::ComposeFrame()
{
	score.DrawScorePanel(gfx);	
	for (int i = 0; i < 3 - lostLives; ++i)
	{
		Lives::DrawRed(355 + i * 40, 13, gfx);
	}
	brd.DrawBorder();
	
	if (gameIsStarted)
	{
		goal.Draw(brd);
		if (highGoalSpawned)
		{
			highgoal.UpdateColor();
			highgoal.Draw(brd);
		}
		snek.Draw(brd);

		if (gameIsPaused)
		{
			SpriteCodex::DrawPause(157, 230, gfx);
		}
	}
	else
	{
		SpriteCodex::DrawTitle(133, 200, gfx);
	}
	
	if (gameIsOver)
	{
		SpriteCodex::DrawGameOver(198, 268, gfx);
		if (lostLives < 3)
		{
			SpriteCodex::DrawPressC(165, 465, gfx);
		}
		SpriteCodex::DrawPressR(167, 470, gfx);
	}
	if (gameIsWon)
	{
		SpriteCodex::DrawYouWin(146, 210, gfx);
		SpriteCodex::DrawPressR(167, 470, gfx);
	}
}
