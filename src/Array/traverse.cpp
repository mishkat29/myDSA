#include <iostream>
#include <vector>
#include <cstdint>

// Function to traverse and print the array
void traverseArray(const std::vector<uint32_t>& arr) {
    for (uint32_t num : arr) {  // Range-based loop
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<uint32_t> arr = {1, 2, 3, 4, 5};

    traverseArray(arr);  // Function call

    return 0;
}
