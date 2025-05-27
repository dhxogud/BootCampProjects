// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Call BeginPlay"));
}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AMyCharacter* InCharacter = Cast<AMyCharacter>(InPawn);
	
	
	if (IsValid(InCharacter))
	{
		if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
		{
			if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				if (InCharacter->IMC_Default)
				{
					UE_LOG(LogTemp, Warning, TEXT("AddMappingContext"));
					InputSystem->AddMappingContext(InCharacter->IMC_Default, 0);
				}
			}
		}
	}

}

void AMyPlayerController::OnUnPossess()
{
	//Super::OnUnPossess();
}
