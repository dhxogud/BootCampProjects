// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTService_CheckPlayer.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyCharacter.h"
#include "ZombieCharacter.h"

void UMyBTService_CheckPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMyCharacter* Character = Cast<AMyCharacter>(OwnerComp.GetBlackboardComponent()->
		GetValueAsObject(GetSelectedBlackboardKey()));

	//AMyCharacter* Character = Cast<AMyCharacter>(OwnerComp.GetBlackboardComponent()->
	//	GetValueAsObject(GetSelectedBlackboardKey(FName(TEXT("Player"))));

	if (Character)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(FName(TEXT("CurrentState")), 
			(uint8) EZombieState::Patrol);
	}
}
