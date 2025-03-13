#include <iostream>
using namespace std;

struct NextMaintenanceDate {
    int day, month, year;
};

struct Car {
    int license_num;
    char type;
    NextMaintenanceDate next_maindate;
};

void displayCars(Car* cars, int num_cars, char type) {
    bool found = false;
    cout << "\nCars of type '" << type << "' with next maintenance before 2020:\n";
    for (int j = 0; j < num_cars; j++) {
        if (cars[j].type == type && cars[j].next_maindate.year < 2020) {
            cout << "License: " << cars[j].license_num << " | Date: "
                << cars[j].next_maindate.day << "/"
                << cars[j].next_maindate.month << "/"
                << cars[j].next_maindate.year << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No cars found matching the criteria.\n";
    }
}

int main() {
    
    int num_cars;
    char desired_type;
    char choice;
    do {
        cout << "Enter number of cars: ";
        cin >> num_cars;

        Car* cars = new Car[num_cars]; // Dynamically allocate memory for cars

        cout << "Enter details for " << num_cars << " cars:\n";
        for (int i = 0; i < num_cars; i++) {
            cout << "\nCar " << i + 1 << ":\n";
            cout << "Enter License Number: ";
            cin >> cars[i].license_num;
            cout << "Enter Type (S for Sedan / H for Hatchback): ";
            cin >> cars[i].type;
            cout << "Enter Next Maintenance Date (day month year): ";
            cin >> cars[i].next_maindate.day >> cars[i].next_maindate.month >> cars[i].next_maindate.year;
        }

        cout << "\nEnter the car type to filter (S/H): ";
        cin >> desired_type;

        displayCars(cars, num_cars, desired_type);
		cout << "\nDo you want to enter details for another set of cars? (Y/N): ";
		cin >> choice;
		if (choice == 'N' || choice == 'n') {
			break;
		}

        delete[] cars; // Free allocated memory
	} while (true);
    return 0;
}
