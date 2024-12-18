// Copyright Epic Games, Inc. All Rights Reserved.

#include "EXAMEN_FINALGameMode.h"
#include "EXAMEN_FINALCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Subscriptor.h"
#include "ObserverActor.h"
#include "ObjetosObserver.h"


AEXAMEN_FINALGameMode::AEXAMEN_FINALGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AEXAMEN_FINALGameMode::BeginPlay()
{
    ASubscriptor* MiPublicador = GetWorld()->SpawnActor<ASubscriptor>();

    AObserverActor* MiObservador = GetWorld()->SpawnActor<AObserverActor>();

    if (MiPublicador && MiObservador)
    {
        MiPublicador->RegistrarObserver(MiObservador);
    }
}

void AEXAMEN_FINALGameMode::Tick(float DeltaTime)
{
}
