// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SETest_2GameMode.h"
#include "SETest_2Character.h"
#include "UObject/ConstructorHelpers.h"

ASETest_2GameMode::ASETest_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
