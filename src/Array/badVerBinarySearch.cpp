#include <iostream>

// Mock API function (pretend this is given in the problem)
bool isBadVersion(int version) {
    int first_bad = 4; // Assume version 4 is the first bad version
    return version >= first_bad;
}

// Function to find the first bad version
int firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid; // Narrow search to the left half
        } else {
            left = mid + 1; // Narrow search to the right half
        }
    }
    return left; // First bad version
}

int main() {
    int n = 10; // Assume we have 10 versions
    std::cout << "First bad version: " << firstBadVersion(n) << std::endl;
    return 0;
}
