#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int MAX = 100;

class Employee {
public:
    int id;
    string name;
    string role;
    float salary;
};

Employee emp[MAX];
int n = 0;

// Function to add employee
void addEmployee() {
    if (n >= MAX) {
        cout << "Employee storage full!\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Employee Name: ";
    getline(cin, emp[n].name);

    cout << "Enter Employee ID: ";
    cin >> emp[n].id;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Employee Role: ";
    getline(cin, emp[n].role);

    cout << "Enter Salary: ";
    cin >> emp[n].salary;

    n++;

    cout << "Employee added successfully!\n";
}

// Function to display employees
void displayEmployees() {
    if (n == 0) {
        cout << "No employees found.\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nName  : " << emp[i].name;
        cout << "\nID    : " << emp[i].id;
        cout << "\nRole  : " << emp[i].role;
        cout << "\nSalary: " << emp[i].salary;
        cout << "\n----------------------\n";
    }
}

// Function to search employee
void searchEmployee() {
    if (n == 0) {
        cout << "No employees available.\n";
        return;
    }

    int searchId;
    bool found = false;

    cout << "Enter Employee ID to search: ";
    cin >> searchId;

    for (int i = 0; i < n; i++) {
        if (emp[i].id == searchId) {
            cout << "\nEmployee Found!\n";
            cout << "Name  : " << emp[i].name << endl;
            cout << "ID    : " << emp[i].id << endl;
            cout << "Role  : " << emp[i].role << endl;
            cout << "Salary: " << emp[i].salary << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee not found.\n";
    }
}

// Main menu
int main() {
    int choice;

    do {
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addEmployee();
            break;
        case 2:
            displayEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}