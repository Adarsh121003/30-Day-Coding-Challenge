// Find the minimum in an array
#include <iostream>
#include <algorithm> 

int main() {
    const int arrSize = 6; 
    int arr[arrSize]; 

   
    std::cout << "Enter " << arrSize << " integers:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

   
    int* minElement = std::min_element(arr, arr + arrSize);

    if (minElement != arr + arrSize) {
        std::cout << "The minimum element in the array is: " << *minElement << std::endl;
    } else {
        std::cout << "Array is empty." << std::endl;
    }

    return 0;
}
