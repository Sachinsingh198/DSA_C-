#include <bits/stdc++.h>

int findMin(std::vector<int>& arr) {
    int lo = 0;
    int hi = arr.size() - 1;

    // Handle cases where the array is not rotated
    if (arr[lo] < arr[hi]) {
        return arr[lo];
    }

    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;

        // If mid element is greater than the high element, then the smallest element is in the right half
        if (arr[mid] > arr[hi]) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }

    // Return the minimum element
    return arr[lo];
}



int main(){
    std::vector<int> arr = {5,6,1,2,3,4};
    
}