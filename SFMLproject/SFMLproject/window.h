#ifndef WINDOW
#include "SFML/include/SFML/Graphics.hpp"
#include "SFML/include/SFML/Window.hpp"





class window
{

public:
	window();
	window(const std::string& title, sf::Vector2u& size)
	~window();

	void BeginDraw(); //clear the window
	void EndDraw(); //display the window

	void update();

	bool IsDone();
	bool IsFullScreen();
	sf::Vector2u GetWindowSize();

	void ToggleFullScreen();

	void Draw(sf::Drawable& Drawable);

private:

	void Setup(const std::string& title, sf::Vector2u& size);
		void Destroy();
		void Create();

		sf::RenderWindow  m_window;
		sf::Vector2u m_windowSize;
		std::string m_windowTitle;
		bool m_isDone;
		bool m_isFullScreen;

};

#endif