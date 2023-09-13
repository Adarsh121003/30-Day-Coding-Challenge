// Find sum of two array is equal or not and return the array with bigger sum ✅
#include <iostream>

int main() {
    int n;

    // Input for the size of the arrays
    std::cout << "Enter the size of the arrays: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1;
    }

    // Input the first array
    int A[n];
    std::cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // Input the second array
    int B[n];
    std::cout << "Enter elements of the second array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> B[i];
    }

    // Calculate the sum of elements in both arrays
    int sumA = 0;
    int sumB = 0;

    for (int i = 0; i < n; i++) {
        sumA += A[i];
        sumB += B[i];
    }

    // Compare the sums and determine the result
    if (sumA == sumB) {
        std::cout << "The sums of both arrays are equal." << std::endl;
    } else if (sumA > sumB) {
        std::cout << "The sum of the first array is greater: " << sumA << std::endl;
        std::cout << "First array: ";
        for (int i = 0; i < n; i++) {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The sum of the second array is greater: " << sumB << std::endl;
        std::cout << "Second array: ";
        for (int i = 0; i < n; i++) {
            std::cout << B[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
