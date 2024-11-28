// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "IObserver.h"
#include "ObjetosObserver.generated.h"

UCLASS()
class EXAMEN_FINAL_API AObjetosObserver : public AActor, public IIObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjetosObserver();
public:
	void RegistrarObserver(IIObserver* Observer);
	void DesregistrarObserver(IIObserver* Observer);
	void NotificarObservers(int32 EventID);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	class UStaticMeshComponent* Mesh;
	virtual void Actualizar(int32 EventoID) override;

private:
	TArray<IIObserver*> Observers;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
