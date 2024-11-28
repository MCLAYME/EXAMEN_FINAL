// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetosObserver.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"



// Sets default values
AObjetosObserver::AObjetosObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = Mesh;


}

void AObjetosObserver::RegistrarObserver(IIObserver* Observer)
{
	if (Observer && !Observers.Contains(Observer))
	{
		Observers.Add(Observer);
	}
}

void AObjetosObserver::DesregistrarObserver(IIObserver* Observer)
{
	Observers.Remove(Observer);

}

void AObjetosObserver::NotificarObservers(int32 EventID)
{
	for (IIObserver* Observer : Observers)
	{
		if (Observer)
		{
			Observer->Actualizar(EventID);
			UE_LOG(LogTemp, Warning, TEXT("Notificando a observador con ID de evento: %d"), EventID);
		}
	}
}

void AObjetosObserver::Actualizar(int32 EventoID)
{
	UE_LOG(LogTemp, Warning, TEXT("Objeto Actualizado con Evento ID: %d"), EventoID);

}

// Called when the game starts or when spawned
void AObjetosObserver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjetosObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

