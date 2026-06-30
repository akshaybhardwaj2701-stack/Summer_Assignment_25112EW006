#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Concatenate String\n";
        cout << "4. Compare String\n";
        cout << "5. Reverse String\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "String: " << str << endl;
            break;

        case 2:
            cout << "Length of String = " << str.length() << endl;
            break;

        case 3:
            cout << "Enter another string: ";
            getline(cin, str2);
            cout << "Concatenated String: " << str + str2 << endl;
            break;

        case 4:
            cout << "Enter another string: ";
            getline(cin, str2);

            if (str == str2)
                cout << "Both strings are equal.\n";
            else
                cout << "Strings are not equal.\n";
            break;

        case 5:
            cout << "Reversed String: ";
            for (int i = str.length() - 1; i >= 0; i--)
                cout << str[i];
            cout << endl;
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}