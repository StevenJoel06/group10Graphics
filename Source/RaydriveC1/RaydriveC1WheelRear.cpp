// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaydriveC1WheelRear.h"
#include "UObject/ConstructorHelpers.h"

URaydriveC1WheelRear::URaydriveC1WheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}