#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Item item[100];
    int count = 0, choice, searchId, i, j;
    bool found;

    do {
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Delete Item\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Item ID: ";
            cin >> item[count].id;

            cout << "Enter Item Name: ";
            cin >> item[count].name;

            cout << "Enter Quantity: ";
            cin >> item[count].quantity;

            cout << "Enter Price: ";
            cin >> item[count].price;

            count++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Items Available.\n";
            } else {
                cout << "\nID\tName\tQuantity\tPrice\n";
                for (i = 0; i < count; i++) {
                    cout << item[i].id << "\t"
                         << item[i].name << "\t"
                         << item[i].quantity << "\t\t"
                         << item[i].price << endl;
                }
            }
            break;

        case 3:
            found = false;
            cout << "Enter Item ID to Search: ";
            cin >> searchId;

            for (i = 0; i < count; i++) {
                if (item[i].id == searchId) {
                    cout << "\nItem Found\n";
                    cout << "ID: " << item[i].id << endl;
                    cout << "Name: " << item[i].name << endl;
                    cout << "Quantity: " << item[i].quantity << endl;
                    cout << "Price: " << item[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item Not Found.\n";
            break;

        case 4:
            found = false;
            cout << "Enter Item ID to Delete: ";
            cin >> searchId;

            for (i = 0; i < count; i++) {
                if (item[i].id == searchId) {
                    for (j = i; j < count - 1; j++) {
                        item[j] = item[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "Item Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Item Not Found.\n";
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}