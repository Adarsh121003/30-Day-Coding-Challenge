#include <iostream>

int findKey(int key, int arr[], int arrSize) {
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

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

    int key;

   
    std::cout << "Enter the key to search for: ";
    std::cin >> key;

    int position = findKey(key, arr, arrSize);

    if (position != -1) {
        std::cout << key << " is found at position " << position << " in the array." << std::endl;
    } else {
        std::cout << key << " is not found in the array." << std::endl;
    }

    return 0;
}
