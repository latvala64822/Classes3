#pragma once
#include <string>
using namespace std;

#ifndef VEHICLE
#define VEHICLE

class Vehicle {
	protected:
		string manufacturer;
		unsigned int yearBuilt;
	public:
		Vehicle();

		string getManufacturer();
		void setManufacturer(string);

		unsigned int getYearBuilt();
		void setYearBuilt(unsigned int);

		void displayInfo();
};
#endif