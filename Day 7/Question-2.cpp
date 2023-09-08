// Merge 2 Array
#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter the number of elements in the first array: ";
    std::cin >> n;
    
    std::cout << "Enter the number of elements in the second array: ";
    std::cin >> m;

    int arr1[n], arr2[m], mergedArr[n + m];

    std::cout << "Enter " << n << " integers for the first array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter " << m << " integers for the second array:\n";
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    // Merge the arrays
    for (int i = 0; i < n; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        mergedArr[n + i] = arr2[i];
    }

    std::cout << "Merged array:\n";
    for (int i = 0; i < n + m; i++) {
        std::cout << mergedArr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
