// Copyright Epic Games, Inc. All Rights Reserved.

#include "GuardedRelicGameMode.h"
#include "GuardedRelicCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGuardedRelicGameMode::AGuardedRelicGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
