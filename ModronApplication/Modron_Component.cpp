#include "Modron_Component.h"

int Modron_Component::command_(COMMANDS cmd)
{
	std::list<Modron_SubComponent*>::iterator itr = subcomponents.begin();
	while (itr != subcomponents.end())
	{
		(*itr)->execute(cmd);
		itr++;
	}

	return 1;
}