// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosFacade.h"
#include "FabricaEnemigosFantasia.h"
#include "FabricaEnemigosAnimales.h"
#include "FabricaEnemigosMisticos.h"
#include "Enemigo.h"

// Sets default values
AEnemigosFacade::AEnemigosFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigosFacade::BeginPlay()
{
	Super::BeginPlay();
	Enemigos = TArray<AEnemigo*>();
	TareasEnemigos = TArray<FString>();

	AFabricaEnemigos* fabricaEnemigos;
	fabricaEnemigos = NewObject<AFabricaEnemigosAnimales>();
	//fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	//fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();

	AEnemigo* enemigoTerrestre01 = fabricaEnemigos->FabricarEnemigoTerrestre();
	FTransform SpawnLocationEnemigo;
	SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	SpawnLocationEnemigo.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	AEnemigo* enemigoSpawned = GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre01->GetClass(), SpawnLocationEnemigo);

	Enemigos.Add(enemigoSpawned);

	//AEstrategiaMovientoAleatorio* estrategiaMovimientoAleatorio = GetWorld()->SpawnActor<AEstrategiaMovientoAleatorio>(AEstrategiaMovientoAleatorio::StaticClass());
	/*enemigoTerrestre01->SetEstrategiaMovimiento(estrategiaMovimientoAleatorio);
	enemigoTerrestre01->SetEnMovimiento(true);*/

	//enemigoSpawned->SetEstrategiaMovimiento(estrategiaMovimientoAleatorio);
	//enemigoSpawned->SetEnMovimiento(true);

	//fabricaEnemigos = NewObject<AFabricaEnemigosFantasia>();
	//AEnemigo* enemigoTerrestre02 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre02->GetClass(), SpawnLocationEnemigo);

	//fabricaEnemigos = NewObject<AFabricaEnemigosMisticos>();
	//AEnemigo* enemigoTerrestre03 = fabricaEnemigos->FabricarEnemigoTerrestre();

	//SpawnLocationEnemigo.SetLocation(FVector(1860.0f, 0.0f + float(FMath::RandRange(-500, 500)), 360.0f));
	//GetWorld()->SpawnActor<AEnemigo>(enemigoTerrestre03->GetClass(), SpawnLocationEnemigo);


}

// Called every frame
void AEnemigosFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigosFacade::EjecutarTareasEnemigos(TArray<AEnemigo*> _Enemigos, TArray<FString> _TareasEnemigos)
{
	for (AEnemigo* EnemigoActual : Enemigos) {
		EnemigoActual->Tarea(_TareasEnemigos);
	}
}

void AEnemigosFacade::Aparecer()
{
	TareasEnemigos.Empty();
	TareasEnemigos.Add("moverse_a_inicio");
	TareasEnemigos.Add("hacerse_visible");
	EjecutarTareasEnemigos(Enemigos, TareasEnemigos);
}

void AEnemigosFacade::Mover()
{
	TareasEnemigos.Empty();
	TareasEnemigos.Add("ubicar_objetivo");
	TareasEnemigos.Add("moverse_a_objetivo");
	EjecutarTareasEnemigos(Enemigos, TareasEnemigos);
}

void AEnemigosFacade::Atacar()
{
	TareasEnemigos.Empty();
	TareasEnemigos.Add("ubicar_objetivo");
	TareasEnemigos.Add("moverse_a_objetivo");
	TareasEnemigos.Add("atacar_objetivo");
	EjecutarTareasEnemigos(Enemigos, TareasEnemigos);

}

void AEnemigosFacade::Desaparecer()
{
	TareasEnemigos.Empty();
	TareasEnemigos.Add("hacerse_invisible");
	TareasEnemigos.Add("destruirse");
	EjecutarTareasEnemigos(Enemigos, TareasEnemigos);
}

