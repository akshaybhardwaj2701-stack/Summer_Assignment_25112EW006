#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100], marks[100];
    string name[100];
    int count = 0, choice, searchRoll, i;

    do {
        cout << "1. Add Student Record\n";
        cout << "2. Display Student Records\n";
        cout << "3. Search Student Record\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[count];
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[count]);

            cout << "Enter Marks: ";
            cin >> marks[count];

            count++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Records Found.\n";
            } else {
                
                for (i = 0; i < count; i++) {
                    cout<<"roll no: " << roll[i] << endl;
                    cout<<"name:  "   << name[i] << endl;
                    cout<<"marks: "   << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (i = 0; i < count; i++) {
                if (roll[i] == searchRoll) {
                    cout << "\nStudent Found\n";
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                    break;
                }
            }

            if (i == count)
                cout << "Student Record Not Found.\n";
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}