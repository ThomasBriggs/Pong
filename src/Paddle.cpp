#include "Paddle.h"

Paddle::Paddle(int x, int y, bool bounded)
{
	this->x = x;
	this->y = y;
	this->bounded = bounded;
	this->width = this->DEFAULT_WIDTH;
	this->height = this->DEFAULT_HEIGHT;
	this->shape = sf::RectangleShape(sf::Vector2f(this->x, this->y));
}


void Paddle::update()
{
	this->shape.setOrigin(this->width / 2, this->height / 2);
	this->shape.setSize(sf::Vector2f(this->width, this->height));
	this->shape.setPosition(sf::Vector2f(this->x, this->y));
	this->shape.setOutlineColor(sf::Color::White);
}

void Paddle::boundsCheck()
{
	if (bounded)
	{
		if ((this->y - this->height / 2) < 0)
			this->y = this->height / 2;
		if ((this->y + this->height / 2) > this->yBound)
			this->y = this->yBound - (this->height / 2);
	}
}

sf::Drawable& Paddle::draw()
{
	boundsCheck();
	update();
	return this->shape;
}

void Paddle::setY(int y)
{
	this->y = y;
}

int Paddle::getY()
{
	return this->y;
}

int Paddle::getHeight()
{
	return this->height;
}

int Paddle::getWidth()
{
	return this->width;
}

void Paddle::setBounds(int x, int y)
{
	this->xBound = x;
	this->yBound = y;
}

void Paddle::setBounds(sf::Vector2u &vector)
{
	this->xBound = vector.x;
	this->yBound = vector.y;
}