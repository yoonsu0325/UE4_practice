// Copyright Epic Games, Inc. All Rights Reserved.

#include "testPuzzleGameMode.h"
#include "testPuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestPuzzleGameMode::AtestPuzzleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
