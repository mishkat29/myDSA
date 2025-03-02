#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

std::vector<int> searchTarget(const std::vector<uint32_t>& arrSorted, uint32_t target) {
    // Get iterators using binary search
    std::vector<uint32_t>::const_iterator lb = std::lower_bound(arrSorted.begin(), arrSorted.end(), target);
    std::vector<uint32_t>::const_iterator ub = std::upper_bound(arrSorted.begin(), arrSorted.end(), target);
    
    // If target is not found
    if (lb == arrSorted.end() || *lb != target) {
        return {-1, -1};
    }
    
    // Convert iterators to indices
    int first = std::distance(arrSorted.begin(), lb);
    int last = std::distance(arrSorted.begin(), ub) - 1;
    
    return {first, last};
}

int main() {
    std::vector<uint32_t> arrSorted = {2, 4, 4, 4, 6, 9};
    uint32_t target = 4;

    std::vector<int> result = searchTarget(arrSorted, target);
    
    if (result[0] != -1) {
        std::cout << "Target found! Indices: " << result[0] << " " << result[1] << std::endl;
    } else {
        std::cout << "Target not found: {" << result[0] << ", " << result[1] << "}" << std::endl;
    }

    return 0;
}
