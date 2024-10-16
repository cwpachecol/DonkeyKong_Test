#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonkeyKongTipos.generated.h"

UENUM()
enum class ETipoEnemigo : uint8
{
	TE_Animal,
	TE_Vegetal,
	TE_Mutante,
	TE_Humano,
	TE_Robot
};

UENUM()
enum class ETipoMedioEnemigo : uint8
{
	TME_Aire,
	TME_tierra,
	TME_Agua,
	TME_Fuego,
	TME_Hielo
};

UENUM()
enum class EEstadoEnemigo : uint8
{
	EE_Idle,
	EE_Movimiento,
	EE_Atacando,
	EE_Huyendo,
	EE_Muerto
};


// Enumeración de ejemplo
UENUM(BlueprintType)
enum class EEstadoJuego : uint8
{
    VE_Idle       UMETA(DisplayName = "Idle"),
    VE_Playing    UMETA(DisplayName = "Playing"),
    VE_Paused     UMETA(DisplayName = "Paused"),
    VE_GameOver   UMETA(DisplayName = "Game Over")
};

// Otra enumeración de ejemplo
UENUM(BlueprintType)
enum class EDificultad : uint8
{
    VE_Facil      UMETA(DisplayName = "Fácil"),
    VE_Medio      UMETA(DisplayName = "Medio"),
    VE_Dificil    UMETA(DisplayName = "Difícil")
};
