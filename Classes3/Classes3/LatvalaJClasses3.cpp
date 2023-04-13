#include "LatvalaJPersonalLibraryV4.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
	unsigned int year = 0;
	string manufacturer;

	cout << "Input manufacturer: ";
	getline(cin, manufacturer);

	cout << "Input year: ";
	year = validateInteger();

	Vehicle vehicle1;
	vehicle1.setManufacturer(manufacturer);
	vehicle1.setYearBuilt(year);
	
	vehicle1.displayInfo();
	cout << '\n' << '\n';


	unsigned short int doors = 0;

	cout << "Input manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);

	cout << "Input year: ";
	year = validateInteger();

	cout << "Input doors: ";
	doors = validateInteger();

	Car car1;
	car1.setManufacturer(manufacturer);
	car1.setYearBuilt(year);
	car1.setDoors(doors);

	car1.displayInfo();
	cout << '\n' << '\n';


	double capacity = 0;

	cout << "Input manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);

	cout << "Input year: ";
	year = validateInteger();

	cout << "Input capacity: ";
	capacity = validateDouble();

	Truck truck1;
	truck1.setManufacturer(manufacturer);
	truck1.setYearBuilt(year);
	truck1.setCapacity(capacity);

	truck1.displayInfo();
	cout << '\n' << '\n';

	endProgram();
}