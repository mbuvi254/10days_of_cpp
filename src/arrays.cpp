#include <iostream>
#include <string>
/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, 
define the variable type, 
specify the name of the array followed by square brackets 
and specify the number of elements it should store:

string cars[4];
We have now declared a variable that holds an array of four strings.
To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
To create an array of three integers, you could write:

int myNum[3] = {10, 20, 30};

Access the Elements of an Array
You access an array element by referring to the index number inside square brackets [].

This statement accesses the value of the first element in cars:

Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

Change an Array Element
To change the value of a specific element, refer to the index number:

cars[0] = "Opel";
Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo

The foreach Loop
There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array:

Syntax
for (type variableName : arrayName) {
  // code block to be executed
}
// In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:

Omit Elements on Declaration
It is also possible to declare an array without specifying the elements on declaration, and add them later:
*/



int main(){
    // //In C++, you don't have to specify the size of the array. 
    // // The compiler is smart enough to determine the size of the array based on the number of inserted values:
    // However, the last approach is considered as "good practice", because it will reduce the chance of errors in your program.



    std::string cars[] = {"Volvo", "BMW", "Ford"};


    for(int i = 0; i < 3; i++){
        // Print each element 
        std::cout << cars[i] << '\n';
    }
    std::cout << "Changing the first element to Opel\n";
    cars[0] = "Opel";
    for(int i = 0; i < 3; i++){
        std::cout << cars[i] << '\n';
    }
    std::cout << cars[0] << std::endl;

    for(std::string car : cars){
        std::cout << car << std::endl;
    }

    /*
    It is because the sizeof() operator returns the size of a type in bytes.
    You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
    To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
    */
    std::cout << "The size of the array is: " << sizeof(cars) / sizeof(cars[0]) << std::endl;
    std::cout << "The size of the array in bytes is: " << sizeof(cars) << std::endl;
    std::cout << "The size of a string in bytes is: " << sizeof(std::string) << std::endl;

    // Note: Arrays in C++ have fixed size. To add elements, you need to create a new array.
    // Here's how you could simulate adding an element:
    const int newSize = 4;
    std::string newCars[newSize];
    
    // Copy existing elements
    for (int i = 0; i < 3; i++) {
        newCars[i] = cars[i];
    }
    
    // Add new element
    newCars[3] = "Toyota";
    
    // Print all elements
    std::cout << "After adding new element:\n";
    for (const auto& car : newCars) {
        std::cout << car << '\n';
    }

    /*
    Loop Through an Array with sizeof()
In the Arrays and Loops Chapter, we wrote the size of the array in the loop condition (i < 5). This is not ideal, since it will only work for arrays of a specified size.

However, by using the sizeof() approach from the example above, we can now make loops that work for arrays of any size, which is more sustainable.

    
    
    */
    for(int i;i< sizeof(newCars)/sizeof(int);i++){
        std::cout << newCars << std::endl;
    }

    
    for(std::string car : newCars){
        std::cout << car << std::endl;
    }
    return 0;
}