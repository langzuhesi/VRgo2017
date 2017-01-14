// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "aliluyaOVO.h"
#include "aliluyaOVOGameMode.h"
#include "aliluyaOVOHUD.h"
#include "aliluyaOVOCharacter.h"

AaliluyaOVOGameMode::AaliluyaOVOGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AaliluyaOVOHUD::StaticClass();
}
