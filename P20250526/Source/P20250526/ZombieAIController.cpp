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
	//	// Task �۾�
	//	// �÷��̾ ã�´�.
	//	// �÷��̾ �׾����� Ȯ���Ѵ�.
	//	// ���� �׾����� Ȯ���Ѵ�.
	//	if (Pawn->CurrentState == EZombieState::Patrol)
	//	{
	//		// ������ ��ġ�� ���Ѵ�.
	//		// ������ ��ġ�� �̵��Ѵ�.
	//		// �÷��̾ ã�´�.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Battle)
	//	{
	//		// �÷��̾ ���� ������ �ִ��� Ȯ���Ѵ�.
	//		// �����Ѵ�.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Chase)
	//	{
	//		// �÷��̾ �Ѿư���.
	//		// ���� ������ Ȯ���Ѵ�.
	//	}
	//	if (Pawn->CurrentState == EZombieState::Dead)
	//	{
	//		// Dead �ִϸ��̼� ���� 3�� �Ŀ� �������.

	//		// 3�� ��ٸ���.
	//		// �������.
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