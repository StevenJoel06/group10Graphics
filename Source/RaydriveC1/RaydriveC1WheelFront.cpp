// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaydriveC1WheelFront.h"
#include "UObject/ConstructorHelpers.h"

URaydriveC1WheelFront::URaydriveC1WheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}