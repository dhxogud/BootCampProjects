﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyWidgetBase.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "LobbyPC.h"

void ULobbyWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	if (StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &ULobbyWidgetBase::Start);
	}

	if (ChatEnterButton)
	{
		ChatEnterButton->OnClicked.AddDynamic(this, &ULobbyWidgetBase::EnterChat);
	}

	if (ChatInput)
	{
		ChatInput->OnTextChanged.AddDynamic(this, &ULobbyWidgetBase::OnChangedEvent);
		ChatInput->OnTextCommitted.AddDynamic(this, &ULobbyWidgetBase::OnCommittedEvent);
	}
}

void ULobbyWidgetBase::Start()
{

}

void ULobbyWidgetBase::EnterChat()
{
	ALobbyPC* PC = Cast<ALobbyPC>(GetOwningPlayer());
	if (PC)
	{
		PC->C2S_SendMessage(ChatInput->GetText());
	}
}

void ULobbyWidgetBase::OnChangedEvent(const FText& Text)
{
	FString Temp = Text.ToString();

	Temp = Temp.Replace(TEXT("바보"), TEXT("* * "));

	ChatInput->SetText(FText::FromString(Temp));

}

void ULobbyWidgetBase::OnCommittedEvent(const FText& Text, ETextCommit::Type CommitMethod)
{
	switch (CommitMethod)
	{
		case ETextCommit::OnEnter:
		{
			ALobbyPC* PC = Cast<ALobbyPC>(GetOwningPlayer());
			if (PC)
			{
				PC->C2S_SendMessage(ChatInput->GetText());
			}
			ChatInput->SetText(FText::FromString(TEXT("")));
		}

		case ETextCommit::OnCleared:
		{
			ChatInput->SetUserFocus(GetOwningPlayer());
		}

	}
}

void ULobbyWidgetBase::ShowStartButton()
{
	if (StartButton)
	{
		StartButton->SetVisibility(ESlateVisibility::Visible);
	}
}

void ULobbyWidgetBase::AddMessage(const FText& Text)
{
	UTextBlock* NewMessage = NewObject<UTextBlock>(ChatScroll);
	
	if (IsValid(NewMessage))
	{
		NewMessage->SetText(Text);
		FSlateFontInfo NewFont = NewMessage->GetFont();
		NewFont.Size = 18;
		NewMessage->SetFont(NewFont);

		ChatScroll->AddChild(NewMessage);
		ChatScroll->ScrollToEnd();
	}
}

