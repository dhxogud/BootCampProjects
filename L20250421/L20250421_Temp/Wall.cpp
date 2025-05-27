#include "Wall.h"
#include <iostream>
AWall::AWall()
{
	Shape = '*';
	Position.X = 10;
	Position.Y = 10;
}
AWall::~AWall()
{

}

void AWall::Render()
{
	std::cout << Shape << std::endl;
}