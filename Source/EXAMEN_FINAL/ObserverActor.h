// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IObserver.h"
#include "ObserverActor.generated.h"

UCLASS()
class EXAMEN_FINAL_API AObserverActor : public AActor, public IIObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObserverActor();
public:

	virtual void Actualizar(int32 EventoID) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
