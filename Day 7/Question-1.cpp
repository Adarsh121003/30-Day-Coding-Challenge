// Sum of array
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    std::cout << "The sum of the elements in the array is: " << sum << "\n";

    return 0;
}
