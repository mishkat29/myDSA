#include <iostream>
#include <vector>
#include <cstdint>

int findMax(const std::vector<uint32_t>& arr) {
    uint32_t maxVal = arr[0];  // Initialize with first element
    for (uint32_t num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

int findMin(const std::vector<uint32_t>& arr) {
    uint32_t minVal = arr[0];  // Initialize with first element
    for (uint32_t num : arr) {
        if (num < minVal) {
            minVal = num;
        }
    }
    return minVal;
}

int main() {
    std::vector<uint32_t> arr = {1, 2, 3, 4, 5, 6, 7, 6, 5};

    std::cout << findMax(arr) << std::endl;
    std::cout << findMin(arr) << std::endl;

    return 0;
}
