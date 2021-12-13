// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ChristJam_BeethovenHUD.generated.h"

UCLASS()
class AChristJam_BeethovenHUD : public AHUD
{
	GENERATED_BODY()

public:
	AChristJam_BeethovenHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

