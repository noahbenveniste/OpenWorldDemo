// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OpenWorldDemoGameMode.h"
#include "OpenWorldDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOpenWorldDemoGameMode::AOpenWorldDemoGameMode()
{
	// Set default pawn class to our Blueprinted character
	// TODO: Fix this path
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BaseProjectAssets/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
