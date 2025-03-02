#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

void countOccurence(std::vector<uint32_t>& arr, int target) {
    int counter = 0;
    for (int num : arr) {
        if (num == target) {
            counter++;
        }
    }
    std::cout << counter << std::endl;
}


int main() {
    std::vector<uint32_t> arr = {1, 3,5 ,3, 4, 6, 7, 8, 7, 6, 7, 4};
    int target = 6;
    countOccurence(arr, target);
}