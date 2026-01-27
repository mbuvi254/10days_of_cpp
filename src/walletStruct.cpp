#include <iostream>
#include <string>

using namespace std;

// Define a structure called 'Wallet' to store currency information
// Structures help group related data items of different types together
struct Wallet {
    string currency;  // Stores the currency code (e.g., USD, EUR, GBP)
    double amount;    // Stores the amount of money in the wallet
};

int main() {
    // Method 1: Create a Wallet object and set its properties individually
    Wallet wallet1;  // Declare a Wallet structure variable named wallet1
    
    // Assign values to the members of wallet1 using the dot operator (.)
    wallet1.currency = "USD";  // Set currency to US Dollars
    wallet1.amount = 100.0;    // Set initial amount to 100.0
    
    // Display the details of wallet1
    cout << "Wallet 1:" << endl;
    cout << "Currency: " << wallet1.currency << endl;  // Print currency
    cout << "Amount: " << wallet1.amount << endl;      // Print amount

    // Method 2: Create and initialize a Wallet object in one line
    // This uses uniform initialization syntax
    Wallet wallet2 = {"EUR", 50.0};  // Euro currency with 50.0 amount
    
    // Display the details of wallet2
    cout << "\nWallet 2:" << endl;  // \n adds a blank line for better readability
    cout << "Currency: " << wallet2.currency << endl;
    cout << "Amount: " << wallet2.amount << endl;
    
    return 0;  // Indicate successful program termination
}