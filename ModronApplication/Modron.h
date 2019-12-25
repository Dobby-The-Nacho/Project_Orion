#pragma once
#include "Modron_Enums.h"
#include "Modron_Component.h"
#include <vector>

class Modron {

protected:
	std::vector<Modron_Component*> components;

public:
	virtual int diagnostic() = 0;

	int setComponent(Modron_Component*);
};