#include <iostream>
#include <cstdint>
#include <algorithm>

// Question: Write a function to insert an element at a given index in an array. 
// Assume the array has a fixed size and shifting is required.

int insertElement (int *arr, int &size, int num, int index) {
    for (int i = size; i > index; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[index] = num;
    size++;
    
    for (int i = 0; i < size; i++) {
        std::cout << " " << arr[i];
    }

}

int main () {
    int arr[6] = {1, 2, 3, 4, 5};
    int num = 6;
    int index = 2;
    int size = 5;
    insertElement(arr, size, num, index);

    return 0;
}