// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosAnimales.h"
#include "EnemigoAnimalLeon.h"
#include "EnemigoAnimalCuervo.h"
#include "EnemigoAnimalCocodrilo.h"

AFabricaEnemigosAnimales::AFabricaEnemigosAnimales()
{

}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoTerrestre()
{
	return NewObject<AEnemigoAnimalLeon>();
}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoAereo()
{
	return NewObject<AEnemigoAnimalCuervo>();
}

AEnemigo* AFabricaEnemigosAnimales::FabricarEnemigoAcuatico()
{
	return NewObject<AEnemigoAnimalCocodrilo>();
}
