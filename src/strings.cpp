#include <iostream>
#include <string>

int main(){
    std::string firstName, lastName,fullName;
    
    std::cout << "Register User" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, firstName);  // Read entire line including spaces
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);  // Read entire line including spaces
    // The + operator can be used between strings to add them together to make a new string. This is called concatenation:
    std::cout << "Hello, " << firstName << " " << lastName << "!" << std::endl;
    /*
    Append
A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:
    */
    fullName = firstName.append(lastName);
    std::cout << "Hello, " << fullName << "!" << std::endl;

    /*
    String Length
To get the length of a string, use the length() function:
    */
    std::cout << "Length of fullName: " << fullName.length() << std::endl;

   /*
   Access Strings
You can access the characters in a string by referring to its index number inside square brackets [].
*/
std::cout << fullName[0] << std::endl;
/*
Change String Characters
To change the value of a specific character in a string, refer to the index number, and use single quotes:

*/
fullName[0] = 'd';
/*
The solution to avoid this problem, is to use the backslash escape character.

The backslash (\) escape character turns special characters into string characters:

Escape character	Result	Description
\'	'	Single quote
\"	"	Double quote
\\	\	Backslash
The sequence \"  inserts a double quote in a string:
Other popular escape characters in C++ are:

Escape Character
\n	New Line	
\t	Tab


*/
// std::cout << fullName << "\" Software Engineer\"" << std::endl;
std::cout << fullName << " \"Software Engineer\"" << std::endl;


    return 0; 
}

/*
WARNING!

C++ uses the + operator for both addition and concatenation.

Numbers are added. Strings are concatenated.


*/