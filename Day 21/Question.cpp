#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Invalid input. Number of elements must be greater than 0." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::map<int, int> freqMap;

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    int requiredCount = n / 2;
    int result = -1;

    for (const auto& pair : freqMap) {
        if (pair.second == requiredCount) {
            result = pair.first;
            break;
        }
    }

    if (result != -1) {
        std::cout << "The element that occurs " << n/2 << " times is: " << result << std::endl;
    } else {
        std::cout << "No element occurs " << n/2 << " times in the array." << std::endl;
    }

    return 0;
}
