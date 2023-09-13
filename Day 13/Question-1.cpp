// Find Common element in 2 array  ✅
#include <iostream>
#include <unordered_set>

int main() {
    int n, m;

    // Input for the size of the first array
    std::cout << "Enter the size of the first array: ";
    std::cin >> n;

    // Input for the size of the second array
    std::cout << "Enter the size of the second array: ";
    std::cin >> m;

    if (n <= 0 || m <= 0) {
        std::cout << "Array sizes must be positive integers." << std::endl;
        return 1;
    }

    // Input the first array
    int A[n];
    std::cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // Input the second array
    int B[m];
    std::cout << "Enter elements of the second array: ";
    for (int i = 0; i < m; i++) {
        std::cin >> B[i];
    }

    // Create an unordered_set to store the elements of the first array
    std::unordered_set<int> setA;

    // Populate the set with elements from the first array
    for (int i = 0; i < n; i++) {
        setA.insert(A[i]);
    }

    // Find and print the common elements in the second array
    std::cout << "Common elements: ";
    for (int i = 0; i < m; i++) {
        if (setA.count(B[i])) {
            std::cout << B[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
