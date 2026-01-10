#include <iostream>

// Global variables
int x = 5;  // Initialize x with value 5
int y = 7;  // Initialize y with value 7

int main() {
    // Print a title for the program
    std::cout << "Logical Operators Examples" << std::endl;
    std::cout << "-------------------------" << std::endl;

    // Set cout to display boolean values as 'true'/'false' instead of 1/0
    std::cout << std::boolalpha;

    /* 
    Logical AND (&&) - Returns true only if both conditions are true
    Here: Is x greater than 3 AND less than 10?
    (5 > 3 && 5 < 10) → (true && true) → true
    */
    std::cout << "(x > 3 && x < 10) : " << (x > 3 && x < 10) << std::endl;

    /*
    Logical OR (||) - Returns true if at least one condition is true
    Here: Is x greater than 3 OR less than 4?
    (5 > 3 || 5 < 4) → (true || false) → true
    */
    std::cout << "(x > 3 || x < 4)  : " << (x > 3 || x < 4) << std::endl;

    /*
    Logical NOT (!) - Reverses the logical state of its operand
    Here: Is it NOT true that x is between 3 and 10?
    !(5 > 3 && 5 < 10) → !(true) → false
    */
    std::cout << "!(x > 3 && x < 10): " << (!(x > 3 && x < 10)) << std::endl;

    /*
    Combining NOT with AND
    Here: Is it NOT true that y is between 3 and 10?
    !(7 > 3 && 7 < 10) → !(true && true) → !(true) → false
    */
    std::cout << "!(y > 3 && y < 10): " << (!(y > 3 && y < 10)) << std::endl;

    return 0;
}
