// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project51GameMode.h"
#include "Project51Character.h"
#include "UObject/ConstructorHelpers.h"

AProject51GameMode::AProject51GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
