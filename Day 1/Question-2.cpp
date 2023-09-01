// =============Reverse a String=======================
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
        swap(str[i], str[length - 1 - i]);
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
