#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>

int main()
{
	int x = 0;
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "c++an't [sic]");
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// clear the window with black color
		window.clear(sf::Color::Black);

		sf::CircleShape shape(std::sin(x/100.f)*100, x);

		shape.setFillColor(sf::Color(100, 250, 50));
		shape.setPosition(400.f-std::sin(x/100.f)*100, 300.f-std::sin(x/100.f)*100);

		window.draw(shape);
		x++;


		window.display();
	}

	return 0;
}