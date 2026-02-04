// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4MaterialDesignGameMode.h"
#include "UE4MaterialDesignCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4MaterialDesignGameMode::AUE4MaterialDesignGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
