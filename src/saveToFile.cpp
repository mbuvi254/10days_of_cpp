#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Person {
    string username;
    int age;
};

vector<Person> users;
const string FILE_NAME = "users.txt";

void saveToFile() {
    ofstream file(FILE_NAME);

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return;
    }

    for (const Person& p : users) {
        file << p.username << "," << p.age << endl;
    }

    file.close();
    cout << "Users saved to file ✅\n";
}

void loadFromFile() {
    ifstream file(FILE_NAME);

    if (!file.is_open()) {
        return; // file may not exist yet
    }

    users.clear();
    Person p;
    string line;

    while (getline(file, line)) {
        int commaPos = line.find(',');
        p.username = line.substr(0, commaPos);
        p.age = stoi(line.substr(commaPos + 1));
        users.push_back(p);
    }

    file.close();
}

void registerUser() {
    Person person;

    cin.ignore();
    cout << "Username: ";
    getline(cin, person.username);

    cout << "Age: ";
    cin >> person.age;

    users.push_back(person);
    saveToFile();
}

void viewUsers() {
    if (users.empty()) {
        cout << "No users found.\n";
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
        cout << "\n1. Register User\n";
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
                cout << "Goodbye 👋\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 0);
}

int main() {
    loadFromFile();   // load saved data on start
    mainMenu();
    return 0;
}
