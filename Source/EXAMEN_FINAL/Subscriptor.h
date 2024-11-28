// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IObserver.h"
#include "Subscriptor.generated.h"

UCLASS()
class EXAMEN_FINAL_API ASubscriptor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASubscriptor();

	void RegistrarObserver(IIObserver* Observer);
	void DesregistrarObserver(IIObserver* Observer);
	void NotificarObservers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void activarevento();
	float TiempoDesdeUltimoEvento;
	float IntervaloEvento; 
	TArray<IIObserver*> Observers;
	TArray<int32> Eventos;
	int32 ContadorEventos; 

};
