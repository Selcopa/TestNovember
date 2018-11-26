// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestingNovGameMode.h"
#include "TestingNovHUD.h"
#include "TestingNovCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingNovGameMode::ATestingNovGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingNovHUD::StaticClass();
}
