// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

//#include "MyAssetManager.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Elephant/Meshes/SK_Elephant.SK_Elephant'"));
	if (MeshContainer.Succeeded())
	{
		/*USkeletalMeshComponent* PlayerMesh = GetMesh();
		PlayerMesh->SetSkeletalMesh(MeshContainer.Object);*/
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}

	//static ConstructorHelpers::FObjectFinder<UAnimSequence> Anim(TEXT("AnimSequence'/Game/AfricanAnimalsPack/Crocodile/Animations/ANIM_Crocodile_Idle.ANIM_Crocodile_Idle'"));
	//if (Anim.Succeeded())
	//{
	//	RunAnimation = Anim.Object;
	//}

	//bIsRunning = true;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (bIsRunning) // bIsRunning es una variable booleana que controlas
	//{
	//	PlayRunAnimation();
	//}
}

// Called to bind functionality to input
void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//void AEnemigo::Atacar()
//{
//}

//void AEnemigo::PlayRunAnimation()
//{
//	//if (RunAnimation)
//	//{
//	//	GetMesh()->PlayAnimation(RunAnimation, true); // true para que la animación se repita
//	//}
//
//	/*FString Path = TEXT("Skeleton'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile_Skeleton.SK_Crocodile_Skeleton'");
//	CargarSkeletalMesh(Path);*/
//}
//
//void AEnemigo::CargarSkeletalMesh(FString Path)
//{
//
//	//FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
//	//USkeletalMesh* SkeletalMesh = Streamable.LoadSynchronous<USkeletalMesh>(*Path);
//	//if (SkeletalMesh && GetMesh())
//	//{
//	//	GetMesh()->SetSkeletalMesh(SkeletalMesh);
//	//}
//
//	//if (GetMesh())
//	//{
//	//	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
//	//	SkeletalMeshActual = Streamable.LoadSynchronous<USkeletalMesh>(*Path);
//	//	if (SkeletalMeshActual)
//	//	{
//	//		GetMesh()->SetSkeletalMesh(SkeletalMeshActual);
//	//	}
//	//}
//}