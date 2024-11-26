	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IObserver.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIObserver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EXAMEN_FINAL_API IIObserver
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	virtual void Actualizar(int32 EventoID) = 0; // Método que será llamado por el publicador

};
