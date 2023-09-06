// Find the element that appears once in sorted array 
#include <iostream>

int findSingleElement(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                left = mid + 2; 
            } else {
                right = mid - 1; 
            }
        }
       
        else {
            if (arr[mid] == arr[mid - 1]) {
                left = mid + 1; 
            } else {
                right = mid - 2; 
            }
        }
    }

    return -1; 
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " integers in sorted order:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int singleElement = findSingleElement(arr, n);

    if (singleElement != -1) {
        std::cout << "The element that appears once in the sorted array is: " << singleElement << "\n";
    } else {
        std::cout << "No unique element found in the sorted array.\n";
    }

    return 0;
}
