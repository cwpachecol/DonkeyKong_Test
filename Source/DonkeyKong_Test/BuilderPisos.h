// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComponentePiso.h"
#include "Obstaculo.h"
#include "Escalera.h"
#include "Piso.h"
#include "UObject/Interface.h"
#include "BuilderPisos.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderPisos : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_TEST_API IBuilderPisos
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual AComponentePiso* BuildComponentePiso() = 0;
	virtual AComponentePiso* BuildComponenteFijoPiso() = 0;
	virtual AComponentePiso* BuildComponenteMovilPiso() = 0;
	virtual void BuildComponentesPiso() = 0;
	virtual AObstaculo* BuildObstaculo() = 0;
	virtual AEscalera* BuildEscalera() = 0;
	virtual class APiso* GetPiso() = 0;
};
