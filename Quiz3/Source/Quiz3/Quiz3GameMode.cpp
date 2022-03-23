// Copyright Epic Games, Inc. All Rights Reserved.

#include "Quiz3GameMode.h"
#include "Quiz3Character.h"
#include "UObject/ConstructorHelpers.h"

AQuiz3GameMode::AQuiz3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
