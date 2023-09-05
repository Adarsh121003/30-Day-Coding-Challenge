// Find Even Odd
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);
        } else {
            oddNumbers.push_back(arr[i]);
        }
    }

    std::cout << "Even numbers in the array: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::cout << "Odd numbers in the array: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
