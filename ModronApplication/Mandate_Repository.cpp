#include "Mandate_Repository.h"

int Mandate_Repository::insert_Card_(Mandate_Card new_card)
{
	load_Card_(new_card);
	return 1;
};

Mandate_Card Mandate_Repository::eject_Card_(Mandate_Card old_card)
{
	card_storage_.remove(old_card);
	return old_card;
};

int  Mandate_Repository::load_Card_(Mandate_Card card)
{
	card_storage_.remove(card);
	card_storage_.push_front(card);
	return 1;
};

Mandate_Card  Mandate_Repository::get_Loaded_Card()
{
	return card_storage_.front();
};

Mandate_Data Mandate_Repository::get_Loaded_Card_Data()
{
	return card_storage_.front().get_Card_Data_();
};

std::string Mandate_Repository::get_Loaded_Card_Name()
{
	return card_storage_.front().get_File_Name_();
};