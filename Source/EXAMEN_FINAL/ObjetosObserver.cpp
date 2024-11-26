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

void AObjetosObserver::Actualizar()
{
	UE_LOG(LogTemp, Warning, TEXT("Objeto Actualizado"));

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

