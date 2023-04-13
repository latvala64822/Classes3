#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle() {
	capacity = 0;
}

double Truck::getCapacity() {
	return capacity;
}
void Truck::setCapacity(double input) {
	capacity = input;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << ' ' << capacity;
}