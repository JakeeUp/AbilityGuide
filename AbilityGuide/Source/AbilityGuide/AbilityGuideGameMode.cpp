// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbilityGuideGameMode.h"
#include "AbilityGuideCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbilityGuideGameMode::AAbilityGuideGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
