#pragma once
#include <SFML/Graphics.hpp>

class Paddle
{
public:

	static const int DEFAULT_WIDTH = 10;
	static const int DEFAULT_HEIGHT = 100;

	Paddle(int x, int y, bool bounded = false);
	sf::Drawable& draw();
	void setY(int y);
	int getY();

	int getHeight();
	int getWidth();

	void setBounds(int x, int y);
	void setBounds(sf::Vector2u &vector);

	

private:

	int height;
	int width;
	
	int x;
	int y;

	bool bounded = false;
	int xBound = 0;
	int yBound = 0;

	sf::RectangleShape shape;

	void update();
	void boundsCheck();
};