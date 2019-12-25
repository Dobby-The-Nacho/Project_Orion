#pragma once
#include <list>
#include "Mandate_Card.h"
#include "Modron_Component.h"

class Mandate_Repository : public Modron_Component
{
private:
	std::list<Mandate_Card> card_storage_;

public:
	int insert_Card_(Mandate_Card);
	int load_Card_(Mandate_Card);

	int diagnostic() { return 0; };
	int get_serial_id() { return MANDATE_REPOSITORY; };

	Mandate_Card get_Loaded_Card();
	Mandate_Data get_Loaded_Card_Data();
	std::string get_Loaded_Card_Name();
	Mandate_Card eject_Card_(Mandate_Card);
};