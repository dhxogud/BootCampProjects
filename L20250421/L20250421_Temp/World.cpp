#include "World.h"
#include <conio.h>
#include "Actor.h"

UWorld::UWorld()
{

}
UWorld::~UWorld()
{

}

std::vector<AActor*> UWorld::GetActors()
{
	return Actors;
}

void UWorld::SpawnActor(AActor* SpawnedAtor)
{
	Actors.push_back(SpawnedAtor);
}

void UWorld::Run()
{
	while (true)
	{
		for (auto Actor : Actors)
		{
			Actor->Render();
			Actor->Tick();
		}
	}
}