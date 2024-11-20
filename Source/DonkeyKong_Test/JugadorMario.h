// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "JugadorMario.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UJugadorMario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_TEST_API IJugadorMario
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void UsarArmadura() = 0;
	virtual void UsarPoder() = 0;
	virtual void UsarHabilidad() = 0;
	
};
