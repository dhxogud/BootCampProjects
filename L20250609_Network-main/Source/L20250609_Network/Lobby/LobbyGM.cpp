// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "LobbyGS.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TimerManager.h"
#include "Engine/World.h"

void ALobbyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	//ErrorMessage = TEXT("Get Out Here!");

	UE_LOG(LogTemp, Warning, TEXT("PreLogin : %s %s"), *Options, *Address);
}

APlayerController* ALobbyGM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, 
	const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("Login : %d %s"), InRemoteRole, *Options);

	return Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void ALobbyGM::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UE_LOG(LogTemp, Warning, TEXT("PostLogin : %s "), *NewPlayer->GetName());

	CheckConnenctCount();
}


// 에디터 상에서 Logout 하면 다 꺼짐
void ALobbyGM::Logout(AController* Exiting)
{
	CheckConnenctCount();
}

void ALobbyGM::CheckConnenctCount()
{
	uint16 ConnectCount = 0;
	for (auto Iter = GetWorld()->GetPlayerControllerIterator(); Iter; ++Iter)
	{
		ConnectCount++;
	}

	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->ConnectCount = ConnectCount;
		GS->OnRep_ConnectCount();
	}
}

void ALobbyGM::BeginPlay()
{
	Super::BeginPlay();

	//LeftTimeHandle = UKismetSystemLibrary::K2_SetTimer(this, TEXT("DecreaseTime"), 1.f, true);
	//UKismetSystemLibrary::K2_ClearTimer(this, TEXT("DecreaseTime"));

	//C++
	GetWorld()->GetTimerManager().SetTimer(
		LeftTimeHandle,
		this,
		&ALobbyGM::DecreaseTime,
		1.0f,
		true
	);
}

void ALobbyGM::DecreaseTime()
{
	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->LeftTime--;
		if (GS->LeftTime == 0)
		{
			//UKismetSystemLibrary::K2_ClearTimer(this, TEXT("DecreaseTime"));
			GetWorld()->GetTimerManager().ClearTimer(LeftTimeHandle);
		}
		GS->LeftTime = FMath::Clamp(GS->LeftTime, 0,60);
		GS->OnRep_LeftTime(); // Server, Client
	}
}
