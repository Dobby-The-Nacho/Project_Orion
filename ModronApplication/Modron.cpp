#include "Modron.h"

int Modron::setComponent(Modron_Component* arg) 
{ 
	components.push_back(arg); 
	return 1;
};