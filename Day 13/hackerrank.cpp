// Objective
// In this challenge, we will use loops to do some math. Check out the Tutorial tab to learn more.

// Task
// Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: n x i = result.

// Example

// The printout should look like this:

// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30
// Input Format

// A single integer, .

// Constraints

// Output Format

// Print  lines of output; each line  (where ) contains the  of  in the form:
// n x i = result.
// =====================Solution==========================================
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        cout << n << " x " << i << " = " << result << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
