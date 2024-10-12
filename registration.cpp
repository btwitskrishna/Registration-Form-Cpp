#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> users;

void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    users[username] = password;
    cout << "User registered successfully!" << endl;
}

void login() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (users.find(username) != users.end() && users[username] == password) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                login();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
