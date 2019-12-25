#include "Console_Entry_Point.h"
#include <iostream>
#include <fstream>

int console_main()
{

	Brain testModron = Brain();
	testModron.memory_ = { 1 };
	std::fstream file;
	file.open("example.bin", std::fstream::in | std::fstream::out | std::fstream::binary | std::fstream::trunc);

	printf("PreSave Memory: %d\n", testModron.memory_.race);
	testModron.save_(file);
	testModron.memory_ = { 2 };
	printf("PostSave Memory: %d\n", testModron.memory_.race);
	testModron.load_(file);
	printf("PostLoad Memory: %d\n", testModron.memory_.race);

	Modron_Factory testFactory = Modron_Factory();
	unsigned char data[100];

	printf("%d\n", testFactory.decodeDataToCreate(data, sizeof(data)));
	printf("%d\n", sizeof(data));
	auto ada = 1;

	std::cin.get();
	return 0;
}