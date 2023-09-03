// Arrays are equal or not
#include <iostream>
using namespace std;

int main() {
    int sizeA, sizeB;
    
    // Input the size of arrays from the user
    cout << "Enter the size of arrays A and B: ";
    cin >> sizeA >> sizeB;

    if (sizeA != sizeB) {
        cout << "Output: 0" << endl;  
        return 0;
    }

    int A[sizeA], B[sizeB];

    // Input elements for array A from the user
    cout << "Enter elements for array A (" << sizeA << " integers): ";
    for (int i = 0; i < sizeA; i++) {
        cin >> A[i];
    }

    // Input elements for array B from the user
    cout << "Enter elements for array B (" << sizeB << " integers): ";
    for (int i = 0; i < sizeB; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < sizeA; i++) {
        if (A[i] != B[i]) {
            cout << "Output: Array are not equal" << endl;  
            return 0;
        }
    }

    cout << "Output: Array are equal" << endl;  
    return 0;
}
