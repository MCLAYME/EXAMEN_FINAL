// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverActor.h"



// Sets default values
AObserverActor::AObserverActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AObserverActor::Actualizar(int32 EventoID)
{

    UE_LOG(LogTemp, Warning, TEXT("Evento recibido en ObserverActor con ID: %d"));

 
}

// Called when the game starts or when spawned
void AObserverActor::BeginPlay()
{
    Super::BeginPlay();

 
}

void AObserverActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

