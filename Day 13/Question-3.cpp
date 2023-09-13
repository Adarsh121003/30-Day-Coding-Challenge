// Find the middle element of array after merging two array  ✅
#include <iostream>
#include <vector>

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
    std::vector<int> A(n);
    std::cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // Input the second array
    std::vector<int> B(m);
    std::cout << "Enter elements of the second array: ";
    for (int i = 0; i < m; i++) {
        std::cin >> B[i];
    }

    // Merge the two arrays into a single sorted array
    std::vector<int> merged(n + m);
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            merged[k++] = A[i++];
        } else {
            merged[k++] = B[j++];
        }
    }

    while (i < n) {
        merged[k++] = A[i++];
    }

    while (j < m) {
        merged[k++] = B[j++];
    }

    // Calculate the length of the merged array
    int mergedLength = n + m;

    // Find the middle element
    int middleElement;
    if (mergedLength % 2 == 0) {
        // If the length is even, there are two middle elements
        middleElement = (merged[mergedLength / 2 - 1] + merged[mergedLength / 2]) / 2;
    } else {
        // If the length is odd, there is one middle element
        middleElement = merged[mergedLength / 2];
    }

    std::cout << "Middle element of the merged array: " << middleElement << std::endl;

    return 0;
}
