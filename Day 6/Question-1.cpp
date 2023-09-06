// Find common elements in an array 
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements in the arrays: ";
    std::cin >> n;

    std::vector<int> arrA(n);
    std::vector<int> arrB(n);

    std::cout << "Enter elements for Array A:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arrA[i];
    }

    std::cout << "Enter elements for Array B:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arrB[i];
    }

    std::vector<int> commonElements;

    std::sort(arrA.begin(), arrA.end());
    std::sort(arrB.begin(), arrB.end());

    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arrA[i] == arrB[j]) {
            commonElements.push_back(arrA[i]);
            i++;
            j++;
        } else if (arrA[i] < arrB[j]) {
            i++;
        } else {
            j++;
        }
    }

    if (commonElements.empty()) {
        std::cout << "No common elements found.\n";
    } else {
        std::cout << "Common elements in the arrays are: ";
        for (int element : commonElements) {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
