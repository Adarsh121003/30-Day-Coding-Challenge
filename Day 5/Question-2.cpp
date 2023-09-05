// Key occurance
#include <iostream>

int findFirstOccurrence(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int key;
    std::cout << "Enter the key to search for: ";
    std::cin >> key;

    int A[size];
    int B[size];

    std::cout << "Enter elements for Array A:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> A[i];
    }

    std::cout << "Enter elements for Array B:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> B[i];
    }

    int indexA = findFirstOccurrence(A, size, key);
    int indexB = findFirstOccurrence(B, size, key);

    if (indexA != -1) {
        std::cout << "Key " << key << " first occurs in Array A at index " << indexA << std::endl;
    } else {
        std::cout << "Key " << key << " is not found in Array A." << std::endl;
    }

    if (indexB != -1) {
        std::cout << "Key " << key << " first occurs in Array B at index " << indexB << std::endl;
    } else {
        std::cout << "Key " << key << " is not found in Array B." << std::endl;
    }

    return 0;
}
