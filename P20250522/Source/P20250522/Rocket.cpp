// Fill out your copyright notice in the Description page of Project Settings.

#include "Rocket.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFrameWork/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARocket::ARocket()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Body(TEXT("/ Script / Engine.StaticMesh'/Game/Resources/SM_Rocket.SM_Rocket'"));

	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}
	Body->SetupAttachment(Box);
	Body->AddRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));

	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));

	MoveSpeed = 2000.0f;

	Movement->InitialSpeed = MoveSpeed;
	Movement->MaxSpeed = MoveSpeed;
}

// Called when the game starts or when spawned
void ARocket::BeginPlay()
{
	Super::BeginPlay();
	
	SetLifeSpan(3.0f);

	OnActorBeginOverlap.AddDynamic(this, &ARocket::ProcessBeginOverlap);
}

// Called every frame
void ARocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARocket::ProcessBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag(TEXT("Player")))
	{
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *OtherActor->GetName());

	UGameplayStatics::ApplyDamage(OtherActor,
		100.0f,
		nullptr,
		this,
		UDamageType::StaticClass()
	);


	//CallCPPToExecuteBP(100);

	CallCPPToDefaultExecuteBP(100);

	Destroy();
}

void ARocket::CallCPPToDefaultExecuteBP_Implementation(int Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("이건 Cpp 호출 "), Damage);
}

