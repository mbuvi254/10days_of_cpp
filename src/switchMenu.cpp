#include <iostream>
#include <string>

void WalletMenu(){
    std::cout << "Wallet Menu" << std::endl;
    std::cout << "1. Add money" << std::endl;
    std::cout << "2. Withdraw money" << std::endl;
    std::cout << "3. Check balance" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void TransactionMenu(){
    std::cout << "Transaction Menu" << std::endl;
    std::cout << "1. Add transaction" << std::endl;
    std::cout << "2. View transactions" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

void MainMenu(){
    std::cout << "Main Menu" << std::endl;
    std::cout << "1. Wallet" << std::endl;
    std::cout << "2. Transactions" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

int main(){
    int choice;

    while(true){
    MainMenu();
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice){
        case 1:
            WalletMenu();
            break;
        case 2:
            TransactionMenu();
            break;
        case 3:
            std::cout << "Exiting..." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice" << std::endl;
    }
}
    return 0;
}
