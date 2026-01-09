#include <iostream>
#include <string> //string must be namespaced

int age = 30; // int - stores integers (whole numbers), without decimals, such as 123 or -123
double price = 19.99; // double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char  letter = 'a'; // char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
std::string fname = "Daniel"; //string - stores text, such as "Hello World". String values are surrounded by double quotes
bool  active = false; // bool - stores values with two states: true or false
int x = 100;
int y = 50;
int sum = x + y;
int c = 5, d = 6, e = 50;

const std::string fullName = "Daniel Mulatya"; 

/* syntax 
type variableName =value;
Where type is one of C++ types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.
Note that if you assign a new value to an existing variable, it will overwrite the previous value:

Standard library types live in std
std::string
std::cout
std::endl

C++ Identifiers
All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names

Constants
When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only
You should always declare the variable as constant when you have values that are unlikely to change:


*/

int main() {
    //Display variables
    std::cout << fullName << std::endl;
    std::cout << "age :"<< age << "years old." << std::endl;
    std::cout << "price :"<< price << std::endl;
    std::cout << "letter :"<< letter << std::endl;
    std::cout << "fname :"<< fname << std::endl;
    std::cout << "active :"<< active << std::endl;
    //add two variables together
    std::cout << "Sum :" << sum << std::endl;
    std::cout << c + d + e << std::endl;
    
    return 0;

}