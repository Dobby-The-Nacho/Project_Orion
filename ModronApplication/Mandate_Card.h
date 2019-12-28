#pragma once
#include <string>
#include <fstream>
#include <fstream>

#include "Mandate_Data.h"
#include "Modron_SubComponent.h"

class Mandate_Card : public Modron_SubComponent
{
private:
	std::string file_name_;
	Mandate_Data card_Data_;

public:
	int set_Card_Data_(Mandate_Data);
	int set_File_Name_(std::string);

	MODRON_SUBCOMPONENT getSerialization();
	Mandate_Data get_Card_Data_();
	std::string get_File_Name_();

	int diagnostic() { return 0; };
	int execute() { return 0; }

	bool operator == (const Mandate_Card& mc) const 
	{ 
		return file_name_ == mc.file_name_ && 
				card_Data_.race == mc.card_Data_.race; 
	}
};