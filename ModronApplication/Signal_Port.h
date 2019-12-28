#pragma once
#include "Modron_SubComponent.h"

class Signal_Port : Modron_SubComponent {

	int diagnostic() { return 1; };
	int execute(COMMANDS);

	int send(COMMANDS);
};