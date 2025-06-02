// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZombieCharacter.generated.h"

UENUM(BlueprintType)
enum class EZombieState : uint8
{
	Patrol	= 0 UMETA(DispalyName = "Patrol"),
	Battle	= 1 UMETA(DispalyName = "Battle"),
	Chase	= 2 UMETA(DispalyName = "Chase"),
	Dead	= 3 UMETA(DispalyName = "Dead"),
};

class UBehaviorTree;

UCLASS()
class P20250526_API AZombieCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombieCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(BlueprintReadWrite, Category = "State", EditAnywhere)
	EZombieState CurrentState;

	TObjectPtr<UBehaviorTree> ZombieBehaviorTree;
};
