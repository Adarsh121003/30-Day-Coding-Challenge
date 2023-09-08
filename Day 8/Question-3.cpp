// Find prime in Array
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Prime numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
