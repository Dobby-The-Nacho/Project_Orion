#include "Signal_Port.h"

int Signal_Port::execute(COMMANDS cmd)
{
	send(cmd);
	return 1;
}

int Signal_Port::send(COMMANDS cmd)
{
	
}