#include <iostream>

using namespace std;

int main() {
    int A[] = {1, 2, 5, 4, 0};
    int B[] = {1, 2, 5, 4, 0};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    
    if (sizeA != sizeB) {
        cout << "Output: 0" << endl;  
        return 0;
    }

    
    for (int i = 0; i < sizeA; i++) {
        if (A[i] != B[i]) {
            cout << "Output: 0" << endl;  
            return 0;
        }
    }

    cout << "Output: 1" << endl;  
    return 0;
}
