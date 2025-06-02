// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "ZombieCharacter.h"


AZombieAIController::AZombieAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AZombieAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//AZombieCharacter* Pawn = Cast<AZombieCharacter>(GetPawn());

	//if (Pawn)
	//{
	//	// Task 작업
	//	// 플레이어를 찾는다.
	//	// 플레이어가 죽었는지 확인한다.
	//	// 내가 죽었는지 확인한다.
	//	if (Pawn->CurrentState == EZombieState::Patrol)
	//	{
	//		// 랜덤한 위치를 정한다.
	//		// 정해진 위치로 이동한다.
	//		// 플레이어를 찾는다.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Battle)
	//	{
	//		// 플레이어가 공격 범위에 있는지 확인한다.
	//		// 공격한다.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Chase)
	//	{
	//		// 플레이어를 쫓아간다.
	//		// 범위 밖인지 확인한다.
	//	}
	//	if (Pawn->CurrentState == EZombieState::Dead)
	//	{
	//		// Dead 애니메이션 이후 3초 후에 사라진다.

	//		// 3초 기다린다.
	//		// 사라진다.
	//	}
	//}

}

void AZombieAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AZombieCharacter* Zombie = Cast<AZombieCharacter>(GetPawn());

	if (Zombie)
	{
		RunBehaviorTree(Zombie->ZombieBehaviorTree);
	}
}