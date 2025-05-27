#pragma once
#include "Actor.h"


class AFloor : public AActor
{
public:
	AFloor();
	virtual ~AFloor();
	virtual void Render() override;
};

