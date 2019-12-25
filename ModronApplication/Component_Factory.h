#pragma once
#include "Mandate_Repository.h"

class Component_Factory 
{

private:
	Modron_Component * comp;

public:
	Modron_Component * create();

};