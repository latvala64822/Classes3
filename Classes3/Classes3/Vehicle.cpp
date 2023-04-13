#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() {
	yearBuilt = 0;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

void Vehicle::setManufacturer(string input) {
	manufacturer = input;
}


unsigned int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::setYearBuilt(unsigned int input) {
	yearBuilt = input;
}


void Vehicle::displayInfo() {
	cout << manufacturer << ' ' << yearBuilt;
}