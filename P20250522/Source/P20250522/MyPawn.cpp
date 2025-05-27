// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/ArrowComponent.h"
#include "Rocket.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Box);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Body(TEXT("/Script/Engine.StaticMesh'/Game/Resources/SM_P38_Body.SM_P38_Body'"));
	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}

	Right = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right"));
	Right->SetupAttachment(Body);

	Left = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left"));
	Left->SetupAttachment(Body);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Propeller(TEXT("/Script/Engine.StaticMesh'/Game/Resources/SM_P38_Propeller.SM_P38_Propeller'"));
	if (SM_Propeller.Succeeded())
	{
		Right->SetStaticMesh(SM_Propeller.Object);
		Left->SetStaticMesh(SM_Propeller.Object);
	}

	Right->SetRelativeLocation(FVector(37.5f, -21.0f, 1.0f));
	Left->SetRelativeLocation(FVector(37.5f, 21.0f, 1.0f));

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Body);
	Arrow->AddRelativeLocation(FVector(60.0f, 0.0f, 0.0f));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Box);
	SpringArm->TargetArmLength = 170.0f;
	SpringArm->TargetOffset = FVector(0.0f, 0.0f, 40.0f);
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->bDrawDebugLagMarkers = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	BodyMoveSpeed = 300.0f;
	RotateSpeed = 180.0f;
	PropellerRotateSpeed = 18000.0f;
	Boost = 0.5f;

	Movement->MaxSpeed = BodyMoveSpeed;

	Tags.Add(TEXT("Player"));
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddMovementInput(GetActorForwardVector(), Boost);

	Right->AddRelativeRotation(FRotator(0.0f, 0.0f, PropellerRotateSpeed * DeltaTime));
	Left->AddRelativeRotation(FRotator(0.0f, 0.0f, PropellerRotateSpeed * DeltaTime));
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &AMyPawn::Fire);

	PlayerInputComponent->BindAction(TEXT("Boost"), EInputEvent::IE_Pressed, this, &AMyPawn::DoBoost);
	PlayerInputComponent->BindAction(TEXT("UnBoost"), EInputEvent::IE_Released, this, &AMyPawn::UnBoost);

	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &AMyPawn::Pitch);
	PlayerInputComponent->BindAxis(TEXT("Roll"), this, &AMyPawn::Roll);
}

void AMyPawn::Fire()
{
	//RocketTemplete = ARocket::StaticClass();
	GetWorld()->SpawnActor<ARocket>(RocketTemplete, Arrow->K2_GetComponentToWorld());


}
void AMyPawn::DoBoost()
{
	Boost = 1.0f;
}

void AMyPawn::UnBoost()
{
	Boost = 0.0f;
}

void AMyPawn::Pitch(float Value)
{
	AddActorLocalRotation(FRotator(FMath::Clamp(Value, -1.0f, 1.0f) * RotateSpeed * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()),
		0.0f, 
		0.0f));
}

void AMyPawn::Roll(float Value)
{
	AddActorLocalRotation(FRotator(0.0f,
		0.0f,
		FMath::Clamp(Value, -1.0f, 1.0f) * RotateSpeed * UGameplayStatics::GetWorldDeltaSeconds(GetWorld())));
}

void AMyPawn::Test()
{
	UE_LOG(LogTemp, Warning, TEXT("Test"));
}

