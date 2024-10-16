#pragma once

#include "CoreMinimal.h"
#include "DonkeyKongTipos.generated.h"

ENUM()
enum class ETipoNivel : uint8
{
	TN_Basico,
	TN_Normal,
	TN_Avanzado,
	TN_Experto,
	TN_Profesional
};