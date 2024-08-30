// Fab by Core Mechanics


#include "FabCharactersBase.h"


// Sets default values
AFabCharactersBase::AFabCharactersBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFabCharactersBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabCharactersBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFabCharactersBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

