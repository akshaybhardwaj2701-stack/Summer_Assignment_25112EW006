#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int n = str.length();
    int maxCount = 0;
    char ans;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;   // FIXED
            ans = str[i];
        }
    }

    cout << "Most frequent character: " << ans << endl;
   
    return 0;
}