// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;
class UCameraComponent;
class USpringArmComponent;
class UArrowComponent;
class ARocket;

UCLASS()
class P20250522_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Fire();
	void DoBoost();
	void UnBoost();
	void Pitch(float Value);
	void Roll(float Value);

	UFUNCTION(BlueprintCallable)
	void Test();

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UBoxComponent> Box;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Body;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Right;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Left;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UArrowComponent> Arrow;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Movement", BlueprintReadOnly)
	TObjectPtr<UFloatingPawnMovement> Movement;

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	float BodyMoveSpeed;

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	float RotateSpeed;

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	float PropellerRotateSpeed;

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	float Boost;

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	TSubclassOf<ARocket> RocketTemplete; // 내 클래스 이름을 기억하고 싶으면, TSubclassOf 로 생성하고 넣고 싶은 C++ 클래스 이름을 넣으면 된다.
};
