#include "Monster.h"
#include <iostream>
#include "Actor.h"

AMonster::AMonster()
{
	Shape = 'M';
}

AMonster::~AMonster()
{
	
}
void AMonster::Move()
{
	
}
void AMonster::Tick()
{

}
void AMonster::clear()
{
	std::cout << "Å¬¸®¾î" << std::endl;
}