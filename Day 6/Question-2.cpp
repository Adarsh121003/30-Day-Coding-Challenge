// Find missing no in array  
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

    std::vector<int> missingElements;

    std::sort(arrA.begin(), arrA.end());
    std::sort(arrB.begin(), arrB.end());

    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arrA[i] == arrB[j]) {
            i++;
            j++;
        } else if (arrA[i] < arrB[j]) {
            missingElements.push_back(arrA[i]);
            i++;
        } else {
            j++;
        }
    }

    while (i < n) {
        missingElements.push_back(arrA[i]);
        i++;
    }

    if (missingElements.empty()) {
        std::cout << "No missing elements found.\n";
    } else {
        std::cout << "Missing elements in Array B compared to Array A are: ";
        for (int element : missingElements) {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
