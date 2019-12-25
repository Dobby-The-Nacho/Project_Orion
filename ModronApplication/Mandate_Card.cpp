#include "Mandate_Card.h"

int Mandate_Card::set_Card_Data_(Mandate_Data card_Data_Import)
{
	card_Data_ = card_Data_Import;
	return 1;
};

int Mandate_Card::set_File_Name_(std::string name)
{
	file_name_ = name;
	return 1;
};

Mandate_Data Mandate_Card::get_Card_Data_()
{
	return card_Data_;
};

std::string Mandate_Card::get_File_Name_()
{
	return file_name_;
};

MODRON_SUBCOMPONENT Mandate_Card::getSerialization()
{
	return MISSION_CARD;
};