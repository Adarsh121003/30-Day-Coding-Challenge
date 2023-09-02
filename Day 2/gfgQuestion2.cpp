// Find average number in an array using itrative method
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

    int sum = 0;
    for (int i = 0; i < arrSize; ++i) {
        sum += arr[i];
    }

 
    double average = static_cast<double>(sum) / arrSize;

    std::cout << "The average of the elements in the array is: " << average << std::endl;

    return 0;
}
