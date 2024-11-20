// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_TestGameMode.h"
#include "DonkeyKong_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoMuro.h"
#include "Capsula.h"
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
#include "BuilderPisosIntermedios.h"
#include "DirectorPisos.h"
#include "Piso.h"
#include "EstrategiaMovientoAleatorio.h"

#include "ArmaduraJugador.h"
#include "DonkeyKongControlador.h"
#include "EngineUtils.h"

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

	for (TActorIterator<ADonkeyKongControlador> It(GetWorld()); It; ++It) 
	{ 
		DonkeyKongControlador = *It; 
		break; 
	} 
	
	if (DonkeyKongControlador) 
	{ 
		// Iniciar el juego utilizando el controlador 
		//DonkeyKongControlador->
	}


	ArmaduraJugador = GetWorld()->SpawnActor<AArmaduraJugador>(AArmaduraJugador::StaticClass());

	//ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//if (MyCharacter)
	//{
	//	// Establecer la nueva posición
	//	FVector NewLocation = FVector(1160.0f, 1300.0f, 5500.0f);
	//	MyCharacter->SetActorLocation(NewLocation);
	//}

	// FIN CREAR PLATAFORMA ANTERIOR
	//INICIO CREAR PLATAFORMA NUEVA CON PATRON BUILDER
	//Spawn PisosBasicosBuilder and DirectorPisos
	DirectorPisos = GetWorld()->SpawnActor<ADirectorPisos>(ADirectorPisos::StaticClass());
	PisosBasicosBuilder = GetWorld()->SpawnActor<ABuilderPisosBasicos>(ABuilderPisosBasicos::StaticClass());
	PisosIntermediosBuilder = GetWorld()->SpawnActor<ABuilderPisosIntermedios>(ABuilderPisosIntermedios::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	DirectorPisos->SetBuilderPisos(PisosBasicosBuilder);
	DirectorPisos->ConstruirPiso();
	DirectorPisos->SetBuilderPisos(PisosIntermediosBuilder);
	DirectorPisos->ConstruirPiso();

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
	GetWorld()->GetTimerManager().SetTimer(UtilizarArmaduraTimerHandle, this, &ADonkeyKong_TestGameMode::UtilizarArmadura, 5.0f, true);

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

	

}

void ADonkeyKong_TestGameMode::UtilizarArmadura()
{
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

	if (!PlayerCharacter)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("No se detecto al character del jugador"));

	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Se detecto al character del jugador"));
		//AArmaduraJugador* ArmaduraJugador = GetWorld()->SpawnActor<AArmaduraJugador>(AArmaduraJugador::StaticClass());
		ArmaduraJugador->SetJugadorMario(PlayerCharacter);
		ArmaduraJugador->UsarArmadura();
	}
	
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
		// Ahora el actor está en la escena y puedes trabajar con él
	}

	//AMuro* muroSpawned = GetWorld()->SpawnActor<AMuro>(muroActual->GetClass(), SpawnLocationMuro);
	//AMuro* muro_actual = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), SpawnLocationMuro);
	//GetWorld()->GetTimerManager().ClearTimer(SpawnMuroTimerHandle);
	
}

