// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyWidgetBase.generated.h"

class UTextBlock;
class UButton;
class UScrollBox;
class UEditableTextBox;
/**
 * 
 */
UCLASS()
class L20250609_NETWORK_API ULobbyWidgetBase : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UTextBlock> LeftTimeText;

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UTextBlock> ConnectCountText;

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UButton> ChatEnterButton;

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UButton> StartButton;

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UEditableTextBox> ChatInput;

	UPROPERTY(meta = (BindWidgetOptional), VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<UScrollBox> ChatScroll;


	virtual void NativeConstruct() override;

	UFUNCTION()
	void Start();

	UFUNCTION()
	void EnterChat();

	UFUNCTION()
	void OnChangedEvent(const FText& Text);

	UFUNCTION()
	void OnCommittedEvent(const FText& Text, ETextCommit::Type CommitMethod);

	
	void ShowStartButton();

	void AddMessage(const FText& Text);
};
