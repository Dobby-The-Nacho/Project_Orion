#include "Modron_Factory.h"

int Modron_Factory::decodeDataToCreate(unsigned char* data, int count) {

	for (int index = 0; index < count; index += 1) {
		part = MODRON_SECTION >> data[index];
		partNum = data[index] << 5;
		quality = QUALITY_SECTION >> data[index] & ( (8 - QUALITY_SECTION_SIZE) >> 0b11111111 );
		

	}

	return sizeof(data);

}

int Modron_Factory::createModron() {

	return 0;

}