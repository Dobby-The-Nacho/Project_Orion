#pragma once
#include <fstream>

#include "Modron_Component.h"
#include "Mandate_Data.h"

class Brain : public Modron_Component
{
public:
	Mandate_Data memory_;

	int diagnostic() { return 0; };
	int get_serial_id() { return BRAIN; };

	int save_(std::fstream&);
	int load_(std::fstream&);
};