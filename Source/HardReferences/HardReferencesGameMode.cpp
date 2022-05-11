// Copyright Epic Games, Inc. All Rights Reserved.

#include "HardReferencesGameMode.h"
#include "HardReferencesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHardReferencesGameMode::AHardReferencesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Common/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
