#pragma once
#include "Vehicle.h"
#include <string>
using namespace std;

#ifndef TRUCK
#define TRUCK

class Truck : public Vehicle {
	private:
		double capacity;
	public:
		Truck();

		double getCapacity();
		void setCapacity(double);

		void displayInfo();
};

#endif