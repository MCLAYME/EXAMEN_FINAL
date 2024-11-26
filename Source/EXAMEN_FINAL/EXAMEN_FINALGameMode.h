// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EXAMEN_FINALGameMode.generated.h"

UCLASS(minimalapi)
class AEXAMEN_FINALGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AEXAMEN_FINALGameMode();
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};



