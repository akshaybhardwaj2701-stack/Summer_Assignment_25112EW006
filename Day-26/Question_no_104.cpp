#include <iostream>
using namespace std;

int main() {

    int n;
    int record = 0;

    cout << "No of questions: 5\n\n";

    
    cout << "1. What is the capital of India?\n";
    cout << "1- Mumbai\n2- Delhi\n3- Kolkata\n4- Chennai\n";
    cout << "Select an option: ";
    cin >> n;

    if (n == 2) {
        cout << "Correct answer\n\n";
        record++;
    } else {
        cout << "Wrong answer\n\n";
    }

    
    cout << "2. Which country has the highest number of islands?\n";
    cout << "1- Indonesia\n2- Sweden\n3- Canada\n4- Philippines\n";
    cout << "Select an option: ";
    cin >> n;

    if (n == 2) {
        cout << "Correct answer\n\n";
        record++;
    } else {
        cout << "Wrong answer\n\n";
    }
    cout << "3. Which country has the highest population in the world?\n";
    cout << "1- China\n2- India\n3- USA\n4- Russia\n";
    cout << "Select an option: ";
    cin >> n;
    if (n == 2) {
        cout << "Correct answer\n\n";
        record++;
    } else {
        cout << "Wrong answer\n\n";
    }  
    cout << "4. Which country has the highest population density?\n";
    cout << "1- China\n2- India\n3- USA\n4- Bangladesh\n";
    cout << "Select an option: ";
    cin >> n;
    if (n == 4) {
        cout << "Correct answer\n\n";
        record++;
    } else {
        cout << "Wrong answer\n\n";
    }
    cout << "5. Which country has the highest GDP in the world?\n";
    cout << "1- China\n2- India\n3- USA\n4- Russia\n";
    cout << "Select an option: ";
    cin >> n;
    if (n == 3) {
        cout << "Correct answer\n\n";
        record++;
    } else {
        cout << "Wrong answer\n\n";
    }
    cout << "Your score is: " << record << "/5\n";

    if (record == 5)
        cout << "Excellent!\n";
    else if (record >= 3)
        cout << "Good job!\n";
    else
        cout << "Try again!\n";

    cout << "Thank you for playing!\n";
    return 0;
}