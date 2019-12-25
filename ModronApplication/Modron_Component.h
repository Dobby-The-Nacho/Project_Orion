#pragma once
#include "Modron_SubComponent.h"
#include <vector>

class Modron_Component {

protected:
	std::vector<Modron_SubComponent*> subcomponents;

public:
	virtual int diagnostic() = 0;
	virtual int get_serial_id() = 0;
};