#include "Brain.h"

int Brain::save_(std::fstream& ios)
{
	ios.seekp(0, ios.beg);
	ios.write((char*)&memory_, sizeof(Mandate_Data));
	return 1;
};

int Brain::load_(std::fstream& ios)
{
	ios.seekg(0, ios.beg);
	ios.read((char*)&memory_, sizeof(Mandate_Data));
	return 1;
};