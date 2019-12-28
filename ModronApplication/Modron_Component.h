#pragma once
#include <list>

#include "Modron_SubComponent.h"


class Modron_Component {

protected:
	std::list<Modron_SubComponent*> subcomponents;

public:
	virtual int diagnostic() = 0;
	virtual int get_serial_id() = 0;
	int command_(COMMANDS);
};