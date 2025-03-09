#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>

//  Implement a linear search function that returns the index of the target element (or -1 if not found).

int linearSearch(std::vector<uint32_t> &arr, int target) {
    for(size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<uint32_t> arr = {1, 3, 5, 6, 7, 3, 5, 9, 8, 10, 5, 4, 19, 2};
    uint32_t target = 10;
    std::cout << linearSearch(arr, target);
}
