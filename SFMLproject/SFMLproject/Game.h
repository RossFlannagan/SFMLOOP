#ifndef GAME
#include "SFML/include/SFML/window.hpp"


class Game
{
public:
	Game();
	~Game();

	void HandleInput();

	void Update();

	void Render();
	window* GetWindow();



private:
	void MoveMushroom();
	window window;
	
};

#endif