#include <iostream>
#include <string>

using namespace std;

/*
Creating Pointers
You learned from the previous chapter, 
that we can get the memory address of a variable by using the & operator:

string food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)

string food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)

A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. 
The address of the variable you're working with is assigned to the pointer:


Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.

Tip: There are three ways to declare pointer variables, but the first way is preferred:

string* mystring; // Preferred
string *mystring;
string * mystring;


*/

int main() {
  string food = "Pizza";
//value
  cout << food << "\n";
//address
  cout << &food << "\n";
  
  // Create a pointer
  string* chakula = &food;
//reference
  cout << chakula << "\n";
//dereference
  cout << *chakula << "\n";
  return 0;
}