// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DecoradorJugadorCharacter.h"
#include "DonkeyKong_TestCharacter.generated.h"

class AObstaculo;

UCLASS(config=Game)
class ADonkeyKong_TestCharacter : public ACharacter, public IJugadorMario
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	void Parar();
	bool detener;

public:
	ADonkeyKong_TestCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
public:
	AObstaculo* obstaculo01;

public:
	/** Returns obstaculo01 subobject **/
	FORCEINLINE AObstaculo* GetObstaculo() const { return obstaculo01; }
	FORCEINLINE void SetObstaculo(AObstaculo* _obstaculo) { obstaculo01 = _obstaculo; }

public:
	void UsarArmadura() override;
	void UsarPoder() override;
	void UsarHabilidad() override;

};
