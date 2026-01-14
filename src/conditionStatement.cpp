#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

/*
You already know that C++ supports the usual logical conditions from mathematics:

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b

You can use these conditions to perform different actions for different decisions.


C++ has the following conditional statements:

-Use if to specify a block of code to be executed, if a specified condition is true
-Use else to specify a block of code to be executed, if the same condition is false
-Use else if to specify a new condition to test, if the first condition is false
-Use switch to specify many alternative blocks of code to be executed

The if Statement
Use the if statement to specify a block of C++ code to be executed if a condition is true.
Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.


*/


int main() {
    int x;
    int y;

    std::cout << "Enter two numbers to compare\n";

    std::cout << "Enter first number: ";
    std::cin >> x;

    std::cout << "Enter second number: ";
    std::cin >> y;

    if (x > y) {
        std::cout << x << " is greater than " << y << std::endl;
    } else if (x < y) {
        std::cout << x << " is less than " << y << std::endl;
    } else {
        std::cout << x << " is equal to " << y << std::endl;
    }

    return 0;
}
