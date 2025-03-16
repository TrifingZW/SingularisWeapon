/* =====================================================================
 * WeaponType.h
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2024 TrifingZW <TrifingZW@gmail.com>
 * 
 * Copyright (c) 2024 TrifingZW
 * Licensed under MIT License
 * ===================================================================== */

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Melee UMETA(DisplayName = "近战"),
	Ranged UMETA(DisplayName = "远程"),
	Magic UMETA(DisplayName = "魔法"),
	Summon UMETA(DisplayName = "召唤")
};
