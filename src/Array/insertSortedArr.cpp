#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>


//  Given a sorted array, design an algorithm to insert a new element while maintaining sorted order.

int insertSortArr(std::vector<uint32_t> &sortedArr, int ele) {
    int left = 0;
    int right = sortedArr.size() - 1;

    while (left<=right) {
        int mid = left + (right - left)  / 2; 

        if (sortedArr[mid] > ele) {
            right = mid -1;
        } else {
            left = mid + 1;
        }  
    }

    int indexToInset = left;
    sortedArr.insert(sortedArr.begin() + indexToInset, ele);

    for (int num : sortedArr) {
        std::cout << num << " ";
    }

}

int main () {
    std::vector<uint32_t> sortedArr = {1, 2, 3, 5, 7, 9, 10, 11};
    int ele = 8;

    insertSortArr(sortedArr, ele);
}