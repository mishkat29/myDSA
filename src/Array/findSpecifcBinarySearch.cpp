#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

//Given a sorted array, implement binary search to efficiently find the target value. Provide pseudocode and analyze its O(log n) time complexity.

int binarySearch(std::vector<uint32_t> &arr, int target) {
    int left = 0;
    int right = arr.size() -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return arr[mid];
        }
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    std::vector<uint32_t> sortArr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    uint32_t target = 3;
    std::cout << binarySearch(sortArr, target);
}