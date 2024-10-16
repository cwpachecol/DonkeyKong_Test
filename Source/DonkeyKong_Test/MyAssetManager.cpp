// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"


UMyAssetManager& UMyAssetManager::Get()
{
    // TODO: Insertar una instrucci�n "return" aqu�
    UMyAssetManager* Singleton = Cast<UMyAssetManager>(GEngine->AssetManager);
    if (Singleton)
    {
        return *Singleton;
    }
    else
    {
        UE_LOG(LogTemp, Fatal, TEXT("UMyAssetManager must be used as the AssetManagerClass in DefaultEngine.ini"));
        return *NewObject<UMyAssetManager>(); // Nunca se llega aqu�
    }
}

void UMyAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
    // Inicializa cualquier asset especial aqu�
}
