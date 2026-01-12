#include <iostream>  // Include the input/output stream library
using namespace std;  // Use the standard namespace to avoid std:: prefix

int main() {
    // Declare and initialize boolean variables
    bool isCodingFun = true;   // Boolean variable set to true (1)
    bool isFishTasty = false;  // Boolean variable set to false (0)
    
    // Output the boolean values
    // Note: In C++, true is displayed as 1 and false as 0 by default
    cout << isCodingFun << "\n";  // Output: 1 (true)
    cout << isFishTasty;          // Output: 0 (false)
    
    return 0;  // Indicate successful program execution
}