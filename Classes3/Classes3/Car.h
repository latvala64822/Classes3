#pragma once
#include "Vehicle.h"
#include <string>
using namespace std;

#ifndef CAR
#define CAR

class Car : public Vehicle {
	protected:
		unsigned short int doors;
	public:
		Car();

		unsigned short int getDoors();
		void setDoors(unsigned short int);

		void displayInfo();
};

#endif
