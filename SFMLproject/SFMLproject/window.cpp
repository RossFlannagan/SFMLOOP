#include "window.h"


window::window()
{
	Setup("Window", (const sf::Vector2u(600, 400);
}

window::~window()
{
	Destroy();
}

void window::BeginDraw()
{
	m_window.clear(sf::Color::Black);
}

void window::EndDraw()
{
	m_window.display;
}

void window::update()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_isDone = true;
		}
		else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Event::FS)
		{
			ToggleFullScreen();
		}

	}
}

bool window::IsDone()
{
	return false;
}

bool window::IsFullScreen()
{
	return false;
}

sf::Vector2u window::GetWindowSize()
{
	return m_windowSize;
}

void window::ToggleFullScreen()
{
	m_isFullScreen = m_isFullScreen;
	Destroy();
	Create();
}

void window::Draw(sf::Drawable & Drawable)
{
	m_window.draw(Drawable)
}

void window::setup((const std::string & title, sf::Vector2u &size))
{
	m_windowTitle = title;
	m_windowSize = size;
	m_isFullScreen = false;
	m_isDone = false;
	Create();
}

void window::Setup(const std::string & title, sf::Vector2u & size)
{
}

void window::Destroy()
{

}

void window::Create()
{
	auto style = (m_isFullScreen ? sf::Style::FullScreen : sf::Style::Default);

	m_window.create((windowSize.x, WindowSize.y, 32), windowTitle, style)
}
