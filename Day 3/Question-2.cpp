// Key is array
#include <iostream>
using namespace std;

int main() {
    int key;
    
 
    cout << "Enter the key: ";
    cin >> key;

    int A[6], B[6];

    
    cout << "Enter elements for array A (6 integers): ";
    for (int i = 0; i < 6; i++) {
        cin >> A[i];
    }

    cout << "Enter elements for array B (6 integers): ";
    for (int i = 0; i < 6; i++) {
        cin >> B[i];
    }

    int countA = 0, countB = 0;

    for (int i = 0; i < 6; i++) {
        if (A[i] == key) {
            countA++;
        }
        if (B[i] == key) {
            countB++;
        }
    }

    cout << "Occurrences of key " << key << " in array A: " << countA << endl;
    cout << "Occurrences of key " << key << " in array B: " << countB << endl;

    return 0;
}
