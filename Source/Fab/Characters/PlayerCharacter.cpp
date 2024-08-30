// Fab by Core Mechanics


#include "PlayerCharacter.h"
#include "FabMacros.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("%s"),  *FString(__FUNCTION__));
	UE_LOG(LogTemp, Warning, TEXT("PrimaryActorTick.bCanEverTick = %s"), PrimaryActorTick.bCanEverTick ? TEXT ("true") : TEXT("false"));

	PRINT("Hello, %s", *FString(__FUNCTION__));
	FVector TargetLocation(2200.f, 700.f, 150);
	SPHERE(TargetLocation);
	LINE(GetActorLocation(), FVector(2200.f, 700.f, 150));
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SPHERE_TICK(GetActorLocation());
	LINE_TICK(GetActorLocation(), FVector(2200.f, 700.f, 150));
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

