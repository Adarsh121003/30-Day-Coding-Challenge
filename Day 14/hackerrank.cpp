// Objective
// Today we will expand our knowledge of strings, combining it with what we have already learned about loops. Check out the Tutorial tab for learning materials and an instructional video.

// Task
// Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

// Note:  is considered to be an even index.

// Example


// Print abc def

// Input Format

// The first line contains an integer,  (the number of test cases).
// Each line  of the  subsequent lines contain a string, .

// Constraints

// Output Format

// For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.
// =====================Solution================================================
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    cin.ignore(); // Consume the newline character after reading t

    while (t--) {
        string s;
        getline(cin, s);

        string evenChars, oddChars;

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                evenChars += s[i];
            } else {
                oddChars += s[i];
            }
        }

        cout << evenChars << " " << oddChars << endl;
    }

    return 0;
}
