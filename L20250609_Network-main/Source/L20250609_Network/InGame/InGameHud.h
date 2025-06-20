// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InGameHud.generated.h"

/**
 * 
 */
UCLASS()
class L20250609_NETWORK_API AInGameHud : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;

	int8 bShowHeight : 1;

	UFUNCTION(Exec)
	void ShowHeight();

};
