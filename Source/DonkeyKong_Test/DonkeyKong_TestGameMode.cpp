// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_TestGameMode.h"
#include "DonkeyKong_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoMuro.h"
#include "Capsula.h"
#include "componentePlataforma.h"
#include "Barril.h"
#include "Esfera.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Disparador.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroEnvenenado.h"
#include "MuroLadrillo.h"
#include "Inventario.h"
#include "FabricaPosionesBenignas.h"
#include "Posion.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosFantasia.h"
#include "FabricaEnemigosAnimales.h"
#include "FabricaEnemigosMisticos.h"

#include "Enemigo.h"
#include "BuilderPisosBasicos.h"
#include "DirectorPisos.h"
#include "Piso.h"


ADonkeyKong_TestGameMode::ADonkeyKong_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		
	}
}

void ADonkeyKong_TestGameMode::BeginPlay()
{
    Super::BeginPlay();

	
	//ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//if (MyCharacter)
	//{
	//	// Establecer la nueva posici�n
	//	FVector NewLocation = FVector(1160.0f, 1300.0f, 5500.0f);
	//	MyCharacter->SetActorLocation(NewLocation);
	//}

	// INICIO CREAR PLATAFORMA 
	//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Creando plataforma"));
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	//FTransform SpawnLocation;
	//SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 140.0f));
	//SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	//obstaculo01 = GetWorld()->SpawnActor<AObstaculoMuro>(AObstaculoMuro::StaticClass(), SpawnLocation);
	///*if (player01 != nullptr)
	//{
	//	player01->SetObstaculo(obstaculo01);
	//}*/

	//for (int32 i = 0; i < 5; ++i) {
	//	aComponentesPlataformaMoviles.Add(FMath::RandRange(2, 7)); // Genera un n�mero entre 2 y 7
	//}

	//FVector posicionInicial = FVector(1160.0f, -1300.0f, 800.f);
	//FRotator rotacionInicial = FRotator(0.0f, 0.0f, 10.0f);
	//FTransform SpawnLocationCP;
	//float anchoComponentePlataforma = 300.0f;

	//float incrementoAltoComponentePlataforma = 55.0f;
	//float incrementoAltoEntrePisos = 500.0f;
	//float incrementoInicioPiso = 100.0f;
	//float incrementoAnchoComponentePlataforma = -300.0f;
	//
	//int numeroPisoComponentePlataformaMovil = 0;
	//int numeroComponentePlataformaMovil = 4;
	//
	//
	//npp -> N�mero de pisos por plataforma
	//for (int npp = 0; npp < 5; npp++) {
	//	rotacionInicial.Roll = rotacionInicial.Roll * -1;
	//	incrementoInicioPiso = incrementoInicioPiso * -1;
	//	incrementoAnchoComponentePlataforma = incrementoAnchoComponentePlataforma * -1;	
	//	SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
	//	SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));
	//	
	//	for (int ncp = 0; ncp < 10; ncp++) {
	//		
	//		if (ncp != (aComponentesPlataformaMoviles[npp] - 1) && ncp != (aComponentesPlataformaMoviles[npp] + 1)) {
	//			AcomponentePlataforma* cp = GetWorld()->SpawnActor<AcomponentePlataforma>(AcomponentePlataforma::StaticClass(), SpawnLocationCP);
	//			if (ncp == aComponentesPlataformaMoviles[npp]) {
	//				if (FMath::RandRange(0, 1))
	//					cp->setbMoverHorizontalmente(true);
	//				else
	//					cp->setbMoverVerticalmente(true);
	//			}
	//		}
	//		posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
	//		if (ncp < 9) {
	//			posicionInicial.Y = posicionInicial.Y + incrementoAnchoComponentePlataforma;
	//		}
	//		
	//		SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));

	//	}
	//	
	//	posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
	//	posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;
	//}

	// FIN CREAR PLATAFORMA ANTERIOR
	//INICIO CREAR PLATAFORMA NUEVA CON PATRON BUILDER
	//Spawn PisosBasicosBuilder and DirectorPisos
	PisosBasicosBuilder = GetWorld()->SpawnActor<ABuilderPisosBasicos>(ABuilderPisosBasicos::StaticClass());
	DirectorPisos = GetWorld()->SpawnActor<ADirectorPisos>(ADirectorPisos::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	DirectorPisos->SetBuilderPisos(PisosBasicosBuilder);
	DirectorPisos->ConstruirPiso();
	//Get the Engineer's Lodging and Logs the created buildings
	APiso* Piso = DirectorPisos->GetPiso();
	//Piso->LodgingCharacteristics();

	//FIN CREAR PLATAFORMA CON PATRON BUILDER

	/*FVector posicionDisparador = FVector(1160.0f, 0.0f, 1500.f);
	FRotator rotacionDisparador = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationDisparador;
	SpawnLocationDisparador.SetRotation(FQuat(rotacionDisparador));
	SpawnLocationDisparador.SetLocation(posicionDisparador);

	ADisparador* disparador01 = GetWorld()->SpawnActor<ADisparador>(ADisparador::StaticClass(), SpawnLocationDisparador);

	*/
	/*FVector posicionMuro = FVector(1160.0f, 0.0f, 200.f);
	FRotator rotacionMuro = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationMuro;
	SpawnLocationMuro.SetRotation(FQuat(rotacionMuro));
	SpawnLocationMuro.SetLocation(posicionMuro);*/

	/*AMuroElectrico* me01 = GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), SpawnLocationMuro);

	aMuros.Add(me01);

	posicionMuro.Y = 300.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroEnvenenado* me02 = GetWorld()->SpawnActor<AMuroEnvenenado>(AMuroEnvenenado::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me02);*/

	/*posicionMuro.Y = 500.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroLadrillo* me03 = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me03);*/

	
	//GetWorld()->GetTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_TestGameMode::SpawnBarril, 3.0f, true);
	//GetWorld()->GetTimerManager().SetTimer(SpawnMuroTimerHandle, this, &ADonkeyKong_TestGameMode::SpawnMuro, 3.0f, true);


	//Create 4 Inventory
	/*for (int i = 0; i <= 4; i++)
	{
		AInventario* SpawnedInventario = GetWorld()->SpawnActor<AInventario>(AInventario::StaticClass());
		if (SpawnedInventario)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one
			//and log the success string
			inventario = SpawnedInventario;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *inventario->GetName()));
		}
	}*/


	//Crear las fabricas
	//AFabricaPosiones* fabricaPosionesBenignas = GetWorld()->SpawnActor<AFabricaPosionesBenignas>(AFabricaPosionesBenignas::StaticClass());
	//APosion* posion = fabricaPosionesBenignas->ordenarPosion("Salud");
	//posion->SetActorLocation(FVector(1160.0f, -800.0f, 200.f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *posion->getNombrePosion()));
	//posion = fabricaPosionesBenignas->ordenarPosion("Poder");
	//posion->SetActorLocation(FVector(1160.0f, -500.0f, 200.f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *posion->getNombrePosion()));
	//posion = fabricaPosionesBenignas->ordenarPosion("Habilidad");
	//posion->SetActorLocation(FVector(1160.0f, -200.0f, 200.f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *posion->getNombrePosion()));
	//posion = fabricaPosionesBenignas->ordenarPosion("Habilidad");
	//posion->SetActorLocation(FVector(1160.0f, 0.0f, 200.f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *posion->getNombrePosion()));
	//

	//AFabricaEnemigos* fabricaEnemigos;
	////fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	//fabricaEnemigos = NewObject<AFabricaEnemigosAnimales>();
	////fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();

	//AEnemigo* enemigoTerrestre01 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//FTransform SpawnLocationEnemigo;
	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//SpawnLocationEnemigo.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));

	//AEnemigo* enemigoSpawned = GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre01->GetClass(), SpawnLocationEnemigo);

	//fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	//AEnemigo* enemigoTerrestre02 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre02->GetClass(), SpawnLocationEnemigo);

	//fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();
	//AEnemigo* enemigoTerrestre03 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre03->GetClass(), SpawnLocationEnemigo);


}

void ADonkeyKong_TestGameMode::SpawnBarril()
{
	//if (barriles.Num() >= numeroMaximoBarriles) {
	if (contadorBarriles < numeroMaximoBarriles) {
		//Spawn de un objeto barril en la escena sobre la primera plataforma
		FTransform SpawnLocationBarril;
		SpawnLocationBarril.SetLocation(FVector(1160.0f, 900.0f, 860.0f));
		SpawnLocationBarril.SetRotation(FQuat(FRotator(90.0f, 0.0f, 0.0f)));
		//ABarril* barril01 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril);
		barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril));
		contadorBarriles++;

		if (contadorBarriles >= numeroMaximoBarriles) {
			GetWorld()->GetTimerManager().ClearTimer(SpawnBarrilTimerHandle);
		}
	}
}

void ADonkeyKong_TestGameMode::SpawnMuro()
{
	/*FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();*/

	FTransform SpawnLocationMuro;
	SpawnLocationMuro.SetLocation(FVector(1160.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	SpawnLocationMuro.SetRotation(FQuat(FRotator(90.0f , 0.0f, 0.0f)));
	//AMuro* muroActual = AMuro::getMuro("Electrico");
	//AMuro* muroActual = AMuro::getMuro("Envenenado");
	//AMuro* muroActual = AMuro::getMuro("Ladrillo");
	
	AMuro* muroActual = nullptr;

	int tipoMuro = FMath::RandRange(0, 2);
	
	switch (tipoMuro) {
	case 0:
		muroActual = AMuro::getMuro("Electrico");
		break;
	case 1:
		muroActual = AMuro::getMuro("Envenenado");
		break;
	case 2:
		muroActual = AMuro::getMuro("Ladrillo");
	}

	AMuro* muroSpawned = GetWorld()->SpawnActor<AMuro>(muroActual->GetClass(), SpawnLocationMuro);
	// Verificar si el actor fue spawneado correctamente
	if (muroSpawned)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, TEXT("Muro spawneado correctamente"));
		// Ahora el actor est� en la escena y puedes trabajar con �l
	}

	//AMuro* muroSpawned = GetWorld()->SpawnActor<AMuro>(muroActual->GetClass(), SpawnLocationMuro);
	//AMuro* muro_actual = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), SpawnLocationMuro);
	//GetWorld()->GetTimerManager().ClearTimer(SpawnMuroTimerHandle);
	
}
