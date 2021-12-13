// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChristJam_BeethovenGameMode.h"
#include "ChristJam_BeethovenHUD.h"
#include "ChristJam_BeethovenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChristJam_BeethovenGameMode::AChristJam_BeethovenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChristJam_BeethovenHUD::StaticClass();
}
