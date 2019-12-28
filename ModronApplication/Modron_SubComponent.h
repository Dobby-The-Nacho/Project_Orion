#pragma once
#include "Modron_Enums.h"

class Modron_SubComponent {

public:
	virtual int diagnostic() = 0;
	virtual int execute(COMMANDS) = 0;
};