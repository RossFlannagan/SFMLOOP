#include "Game.h"

Game::Game()
{
	m_mushroomTexture.loadFromFile("Mushroom.png");
	m_mushroom.setTexture(mushroomTexture);
	m_increment = sf::Vector2i(4, 4);
}

Game::~Game()
{
}

void Game::HandleInput()
{
}

void Game::Update()
{
	m_window.Update();
	MoveMushroom();
}

void Game::Render()
{
	m_window.BeginDraw();
	m_window.Draw(m_mushroom); //Draw mushroom
	m_window.EndDraw(); //Display 
}

window Game::GetWindow()
{
	return window();
}

void Game::MoveMushroom()
{
	sf::Vector2u windSize = m_window.GetWindowSize();
	sf::Vector2u textSize = m_mushroom.getSize();

	if (m_mushroom.getPosition().x  > window.getSize().x - textSize.x && m_increment.x > 0) (m_mushroom.getPosition().x  < 0 && m_increment.x < 0);

	{
		m_increment.x = m_increment.x;
	}

	if (m_mushroom.getPosition().y > window.getSize().y - textSize.y && m_increment.y > 0) (m_mushroom.getPosition().y < 0 && m_increment.y < 0);
	
	{
		m_increment.y = m_increment.y;
	}

	m_mushroom.setPosition(
		m_mushroom.getPosition().x + m_increment.x,
		m_mushroom.getPosition().y + m_increment.y
	)
}
