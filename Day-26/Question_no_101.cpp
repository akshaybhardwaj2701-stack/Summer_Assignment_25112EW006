#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout << "Guess any number: ";
    cin >> guess;
    while (guess != num) {
        if (guess > num) {
            cout << "Your guess is too large\n";
        }
        else if (guess < num) {
            cout << "Your guess is too small\n";
        }
        cout << "Guess again: ";
        cin >> guess;
    }
    cout << "Congratulations! Your guess is correct.\n";
    return 0;
}