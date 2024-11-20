// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorJugadorCharacter.h"
#include "ArmaduraJugador.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_TEST_API AArmaduraJugador : public ADecoradorJugadorCharacter
{
	GENERATED_BODY()
public:
	AArmaduraJugador();
	virtual void UsarArmadura() override;
	virtual void UsarPoder() override;
	virtual void UsarHabilidad() override;
	//virtual void SetJugadorMario(AActor* _jugadorMario) override;
};
