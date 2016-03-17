// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Outsider.h"
#include "OutsiderGameMode.h"
#include "OutsiderCharacter.h"

AOutsiderGameMode::AOutsiderGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AOutsiderCharacter::StaticClass();	
}
