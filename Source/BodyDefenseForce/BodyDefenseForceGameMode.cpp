// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BodyDefenseForceGameMode.h"
#include "BodyDefenseForceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABodyDefenseForceGameMode::ABodyDefenseForceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/DemoThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
