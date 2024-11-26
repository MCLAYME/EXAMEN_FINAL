#include "Subscriptor.h"
#include "IObserver.h"

// Sets default values
ASubscriptor::ASubscriptor()
{
    // Set this actor to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;
    ContadorEventos = 0;
    TiempoDesdeUltimoEvento = 0.0f;
    IntervaloEvento = 5.0f; 
}

void ASubscriptor::RegistrarObserver(IIObserver* Observer)
{
    if (Observer && !Observers.Contains(Observer))
    {
        Observers.Add(Observer);
    }
}

void ASubscriptor::DesregistrarObserver(IIObserver* Observer)
{
    Observers.Remove(Observer);
}

void ASubscriptor::NotificarObservers()
{
    for (IIObserver* Observer : Observers)
    {
        if (Eventos.Num() > 1) 
        {
            Observer->Actualizar(Eventos.Last());
        }
    }
}

// Called when the game starts or when spawned
void ASubscriptor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ASubscriptor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDesdeUltimoEvento += DeltaTime;

    if (TiempoDesdeUltimoEvento >= IntervaloEvento)
    {
        activarevento();
        TiempoDesdeUltimoEvento = 5.0f; 
    }
}

void ASubscriptor::activarevento()
{
    if (ContadorEventos < 5)
    {
        Eventos.Add(ContadorEventos);
        ContadorEventos++;
    }
    else
    {
        Eventos.RemoveAt(0);
        Eventos.Add(ContadorEventos);
        ContadorEventos++;
    }

    NotificarObservers(); 
}