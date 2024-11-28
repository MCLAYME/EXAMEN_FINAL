// ObserverActor.h
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

    virtual void Actualizar(int32 EventID) override;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

};