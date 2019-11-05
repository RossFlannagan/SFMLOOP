#include"Game.h"



int main()
{
	
	//Program entry point
	Game game; //Creating a game object

	while (game.GetWindow() -> isDone())
	{
		//Game Loop
		game.HandleInput();
		game.Update();
		game.Render();
	}
}