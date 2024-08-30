// Fab by Core Mechanics

#pragma once

#include "CoreMinimal.h"
#include "FabCharactersBase.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class FAB_API AEnemyCharacter : public AFabCharactersBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
