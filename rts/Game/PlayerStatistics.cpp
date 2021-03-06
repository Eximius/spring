/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#include "PlayerStatistics.h"

#include "System/Platform/byteorder.h"

PlayerStatistics::PlayerStatistics()
	: mousePixels(0)
	, mouseClicks(0)
	, keyPresses(0)
	, numCommands(0)
	, unitCommands(0)
{
}

void PlayerStatistics::swab()
{
	swabDWordInPlace(mousePixels);
	swabDWordInPlace(mouseClicks);
	swabDWordInPlace(keyPresses);

	swabDWordInPlace(numCommands);
	swabDWordInPlace(unitCommands);
}
