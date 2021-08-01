// Copyright Epic Games, Inc. All Rights Reserved.

#include "WestWagonGameMode.h"
#include "WestWagonPawn.h"

AWestWagonGameMode::AWestWagonGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AWestWagonPawn::StaticClass();
}

