// Find a duplicate number in an array of integers
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Duplicate numbers in the array are: ";

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                std::cout << arr[i] << " ";
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
