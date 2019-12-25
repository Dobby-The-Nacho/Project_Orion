#pragma once
//#include <iostream>
#include <fstream>
#include "Mandate_Data.h"

class Brain
{
public:
	Mandate_Data memory_;

	int save_(std::fstream&);
	int load_(std::fstream&);
};