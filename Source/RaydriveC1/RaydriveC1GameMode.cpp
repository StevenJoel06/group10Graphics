// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaydriveC1GameMode.h"
#include "RaydriveC1PlayerController.h"

ARaydriveC1GameMode::ARaydriveC1GameMode()
{
	PlayerControllerClass = ARaydriveC1PlayerController::StaticClass();
}
