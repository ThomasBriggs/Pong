#pragma once
#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball();
	sf::Drawable& draw();

private:

	sf::CircleShape shape;
	int x;
	int y;

	int vx;
	int yx;



};