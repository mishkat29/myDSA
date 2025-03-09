#include <iostream>
#include <cstdint>
#include <algorithm>

// Write a function to delete an element from a specified index in an array and shift subsequent elements to fill the gap.

int main () {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int itemIndex = 2;

    for (int i = itemIndex; i <size-1; i++) {
        arr[i] = arr[i+1];
    }       

    size--;

    for (int i = 0; i <size; i++) {
        std::cout << arr[i] << " ";
    }
}