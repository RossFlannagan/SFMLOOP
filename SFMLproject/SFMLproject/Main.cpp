#include"SFML/include/SFML/Graphics.hpp"

//sf::Vector2f viewSize(1024, 768);
//sf::VideoMode vm(viewSize.x, viewSize.y);
//sf::RenderWindow window(vm, "Hello SFML!!", sf::Style::Default);

int main() {
	
	sf::RenderWindow window(sf::VideoMode(640, 480), "Bouncing Mushroom");
	sf::Texture mushroomTexture;
	mushroomTexture.loadFromFile("Resources/images/Mushroom.png");
	
	sf::Sprite Mushroom(mushroomTexture);
	sf::Vector2u size = mushroomTexture.getSize();
	
	Mushroom.setOrigin(size.x / 2, size.y / 2);
	sf::Vector2f increment(0.4f, 0.4f);
	
	//initialise game objects
	while (window.isOpen())
	{
		//handle keyboard events
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed);
			{
				window.close();
			}
		}
		//update game objects
		if (Mushroom.getPosition().x + (size.x / 2) > window.getSize().x && increment.x > 0) (Mushroom.getPosition().x + (size.x / 2) > window.getSize().x && increment.x > 0);

		// Reverse direction on the x axis
		if (Mushroom.getPosition().y + (size.y / 2) > window.getSize().y && increment.y > 0) (Mushroom.getPosition().y + (size.y / 2) > window.getSize().y && increment.y > 0);

		Mushroom.setPosition(Mushroom.getPosition() - increment);

		window.clear(sf::Color::Red);

		//render game objects
		window.draw(Mushroom);

		window.display();

	}
	    return 0;
}