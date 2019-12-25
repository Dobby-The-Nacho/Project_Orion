#pragma once
#include "Modron_Enums.h"
#include "Component_Factory.h"
#include "SubComponent_Factory.h"

class Modron_Factory {

private:
	unsigned char part;
	unsigned char partNum;
	unsigned char quality;
	Component_Factory cF;

public:
	int decodeDataToCreate(unsigned char* data, int count);
	int createModron();

};