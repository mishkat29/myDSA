#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>


// Trapping Rainwater Problem states that given an array of n non-negative integers arr[] representing an elevation map where the 
// width of each bar is 1, compute how much water it can trap after rain.

int rainwater (std::vector<int> &arrUnsort) {
    int left = 1;
    int right = arrUnsort.size() - 2;
    int maxStored = 0;

    int lmax = arrUnsort[left - 1];
    int rmax = arrUnsort[right + 1];

    while(left<=right){

        if(rmax <= lmax) {
            maxStored += std::max(0, rmax - arrUnsort[right]);
            rmax = std::max(rmax, arrUnsort[right]);
            right -= 1;
        } else {
            maxStored += std::max(0, lmax - arrUnsort[left]);
            lmax = std::max(lmax, arrUnsort[left]);
            left += 1;
        }
    }
    return maxStored;
}

int main () {
    std::vector<int> arrUnsort = {1, 3, 0, 5, 3, 6, 0, 4, 1, 2};

    int storedWater = rainwater(arrUnsort);
    std::cout << storedWater;
}