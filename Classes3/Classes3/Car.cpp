#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : Vehicle() {
	doors = 0;
}


unsigned short int Car::getDoors() {
	return doors;
}

void Car::setDoors(unsigned short int input) {
	doors = input;
}


void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << ' ' << doors;
}