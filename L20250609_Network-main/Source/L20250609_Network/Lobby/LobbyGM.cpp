// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "MyGameStateBase.h"

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

	AMyGameStateBase* GS = GetGameState<AMyGameStateBase>();
	if (GS)
	{
		GS->ConnectCount = ConnectCount;
	}
}