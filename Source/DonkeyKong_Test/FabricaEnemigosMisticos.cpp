// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosMisticos.h"
#include "EnemigoDragonNightmare.h"
#include "EnemigoDragonUsurper.h"
#include "EnemigoDragonSoulEater.h"


AFabricaEnemigosMisticos::AFabricaEnemigosMisticos()
{

}

AEnemigo* AFabricaEnemigosMisticos::FabricarEnemigoTerrestre()
{
    return NewObject<AEnemigoDragonNightmare>();
}

AEnemigo* AFabricaEnemigosMisticos::FabricarEnemigoAereo()
{
    return NewObject<AEnemigoDragonUsurper>();
}

AEnemigo* AFabricaEnemigosMisticos::FabricarEnemigoAcuatico()
{
    return NewObject<AEnemigoDragonSoulEater>();
}
