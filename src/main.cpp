#include <SFML/Graphics.hpp>
#include <iostream>
#include "Paddle.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");

	Paddle paddle = Paddle(50, 0, true);
	paddle.setBounds(window.getSize());

	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseMoved)
			{
				paddle.setY(sf::Mouse::getPosition(window).y);
			}
		}

		window.clear(sf::Color::Black);
		window.draw(paddle.draw());
		window.display();


	}
}