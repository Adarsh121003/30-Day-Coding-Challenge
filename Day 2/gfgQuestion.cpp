#include <iostream>

int main() {
    int arrSize;

    
    std::cout << "Enter the size of the array: ";
    std::cin >> arrSize;

    int arr[arrSize];

    
    std::cout << "Enter " << arrSize << " integers for the array:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " is even." << std::endl;
        } else {
            std::cout << arr[i] << " is odd." << std::endl;
        }
    }

    return 0;
}
