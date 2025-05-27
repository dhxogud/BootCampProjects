#include "Actor.h"
#include <iostream>

AActor::AActor()
{
	Shape = ' ';
}

AActor::~AActor()
{

}

void AActor::Tick()
{
	Render();
}

void AActor::AddActorWorldOffset(FVector2D Delta)
{
	Position.Add(Delta);
}
void AActor::Render()
{
	std::cout << Shape << std::endl;
}
