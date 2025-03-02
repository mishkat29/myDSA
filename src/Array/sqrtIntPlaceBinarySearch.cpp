#include <iostream>
#include <cstdint>

int searchIntPlace(uint32_t target) {
    int left = 1, right = target, ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid * mid == target) {
            return mid;  // Found exact square root
        } 
        else if (mid * mid < target) {
            ans = mid;  // Store the best possible integer sqrt
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    uint32_t target = 10;
    
    std::cout << "Integer square root of " << target << " is: " << searchIntPlace(target) << std::endl;

    return 0;
}
