#include <iostream>
#include <string>

using namespace std;

// Define a structure called 'Person' to store information about a person
// Structures group related data items of different types under a single name
struct Person {
    string name;    // Person's full name
    int age;        // Person's age in years
    string city;    // City where the person lives
};

int main() {
    // Example 1: Basic structure usage
    // Declare a Person structure variable
    Person person1;
    
    // Assign values to the members of person1 using the dot operator (.)
    person1.name = "John";
    person1.age = 25;
    person1.city = "New York";
    
    // Access and print the structure members
    cout << "Person 1:" << endl;
    cout << "Name: " << person1.name << endl;    // Access name member
    cout << "Age: " << person1.age << endl;      // Access age member
    cout << "City: " << person1.city << endl;    // Access city member
    
    // Example 2: Initializing a structure during declaration
    // You can initialize structure members using curly brace initialization
    Person person2 = {"Alice", 30, "London"};
    
    cout << "\nPerson 2:" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "City: " << person2.city << "\n" << endl;
    
    // Example 3: Anonymous structure (structure without a type name)
    // This creates a one-time structure type that can't be reused
    struct {
        int id;         // Book identifier
        string title;   // Book title
    } book1, book2;     // Declare two variables of this anonymous structure type
    
    // Assign values to the first book
    book1.id = 101;
    book1.title = "C++ Programming";
    
    // Initialize the second book using uniform initialization
    book2 = {102, "Data Structures"};
    
    // Print book information
    cout << "Book 1: " << book1.title << " (ID: " << book1.id << ")" << endl;
    cout << "Book 2: " << book2.title << " (ID: " << book2.id << ")" << endl;
    
    return 0;  // Indicate successful program termination
}