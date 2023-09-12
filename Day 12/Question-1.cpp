// Find the missing number in a given integer array of 1 to 100
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the arrays (n): ";
    std::cin >> n;

    int expected_sum = 0;
    int actual_sum = 0;

    int A[n], B[n];

    std::cout << "Enter elements of array A[]:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
        expected_sum += i;
        actual_sum += A[i];
    }

    std::cout << "Enter elements of array B[]:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> B[i];
        expected_sum += i;
        actual_sum += B[i];
    }

    int missing_number = expected_sum - actual_sum;

    std::cout << "The missing number is: " << missing_number << std::endl;

    return 0;
}
