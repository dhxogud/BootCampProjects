#pragma once
#include <iostream>

#include "Actor.h"

using namespace std;


class AMonster : public AActor
{
public:
	AMonster();
	virtual ~AMonster();
	virtual void Tick();
	virtual void Move();
	void clear();
};

