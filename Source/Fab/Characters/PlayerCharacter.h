// Fab by Core Mechanics

#pragma once

#include "CoreMinimal.h"
#include "FabCharactersBase.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class FAB_API APlayerCharacter : public AFabCharactersBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
	virtual void Tick(float DeltaSeconds) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
//	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
