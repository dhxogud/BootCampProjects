// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_NextPoint.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "ZombieAIController.h"

EBTNodeResult::Type UMyBTTask_NextPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	FVector RandomLocation;

	AAIController* AIC = Cast<AAIController>(OwnerComp.GetOwner());
	if (AIC)
	{
		UNavigationSystemV1::K2_GetRandomReachablePointInRadius(GetWorld(),
			AIC->GetPawn()->GetActorLocation(),
			RandomLocation,
			400.0f);
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName(TEXT("NextPatrolPoint")), RandomLocation);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
