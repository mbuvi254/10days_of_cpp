#include <iostream>
#include <string>

using namespace std;

// Define a structure called 'Car' to store car information
// Structures allow us to group related data items of different types
struct Car {
    string brand;  // Stores the car's manufacturer (e.g., Toyota, Honda)
    string model;  // Stores the car's model name (e.g., Camry, Civic)
    int year;      // Stores the manufacturing year of the car
};

int main() {
    // Method 1: Creating a Car object and setting its properties individually
    Car car1;  // Declare a Car structure variable named car1
    
    // Assign values to the members of car1 using the dot operator (.)
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    
    // Display the details of car1
    cout << "Car 1:" << endl;
    cout << "Brand: " << car1.brand << endl;  // Access and print brand
    cout << "Model: " << car1.model << endl;  // Access and print model
    cout << "Year: " << car1.year << endl;    // Access and print year

    // Method 2: Creating and initializing a Car object in one line
    // This is called uniform initialization
    Car car2 = {"Honda", "Civic", 2021};
    
    // Display the details of car2
    cout << "\nCar 2:" << endl;
    cout << "Brand: " << car2.brand << endl;
    cout << "Model: " << car2.model << endl;
    cout << "Year: " << car2.year << endl;
    
    return 0;  // Indicate successful program termination
}