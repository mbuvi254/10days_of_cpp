#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string username;
    int age;
};

// local memory (RAM)
vector<Person> users;

void registerUser() {
    Person person;

    cout << "Username: ";
    cin.ignore();
    getline(cin, person.username);

    cout << "Age: ";
    cin >> person.age;

    users.push_back(person);   // save in memory

    cout << "\nUser saved in memory ✅\n";
}

void viewUsers() {
    if (users.empty()) {
        cout << "\nNo users registered yet.\n";
        return;
    }

    cout << "\nRegistered Users:\n";
    for (int i = 0; i < users.size(); i++) {
        cout << i + 1 << ". "
             << users[i].username
             << " (" << users[i].age << ")\n";
    }
}

void mainMenu() {
    int choice;

    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Register User\n";
        cout << "2. View Users\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                viewUsers();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);
}

int main() {
    mainMenu();
    return 0;
}
