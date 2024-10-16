// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaPosionesBenignas.h"
#include "PosionBenignaSalud.h"
#include "PosionBenignaPoder.h"
#include "PosionBenignaHabilidad.h"


APosion* AFabricaPosionesBenignas::prepararPosion(FString PosionSKU)
{
    //Select which potion to spawn depending on the passed string
    if (PosionSKU.Equals("Salud")) {
        return GetWorld()->SpawnActor<APosionBenignaSalud>(APosionBenignaSalud::StaticClass());
    }
    else if (PosionSKU.Equals("Poder")) {
        return GetWorld()->SpawnActor<APosionBenignaPoder>(APosionBenignaPoder::StaticClass());
    }
    else if (PosionSKU.Equals("Habilidad")) {
        return GetWorld()->SpawnActor<APosionBenignaHabilidad>(APosionBenignaHabilidad::StaticClass());
    }
    else return nullptr; //Return null if the string isn't valid
}
