#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

// Using the two-pointer approach, find two numbers in a sorted array that sum to a given target.
// Focus: Efficient pair finding with O(n) time.

std::vector<int> twoSum(std::vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        uint32_t sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right};
        }
        else if (sum > target) {
            right--;
        }
        else {
            left++;
        }
    }
    return {0, 0};
}

int main () {
    std::vector<int> arr = {1, -2, 4, 5, -6, 7, -9};
    int target = 5;

    std::vector<int> pair = twoSum(arr, target);

    for (int num : pair) {
        std::cout<< num << "  ";
    }
}