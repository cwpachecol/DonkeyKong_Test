// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaduraJugador.h"
#include "JugadorMario.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"

AArmaduraJugador::AArmaduraJugador()
{
}

void AArmaduraJugador::UsarArmadura()
{
	ACharacter* JugadorCharacter = Cast<ACharacter>(jugadorMario);

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Dentro del metodo usararmadura del decorador"));
    if (JugadorCharacter)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, TEXT("Se detecto el character"));

        // Obtener el componente de mesh (SkeletalMeshComponent)
        USkeletalMeshComponent* MeshComponent = JugadorCharacter->GetMesh();

        if (MeshComponent)
        {
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, TEXT("Se detecto el mesh del character"));
            // Desactivar el mesh
            MeshComponent->SetVisibility(false);

            // Alternativamente, puedes destruir el componente si no lo necesitas más
            // MeshComponent->DestroyComponent();
        }
    }
}

void AArmaduraJugador::UsarPoder()
{
}

void AArmaduraJugador::UsarHabilidad()
{
}
