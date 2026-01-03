
//Search in Rotated Sorted Array
/*
 In a Rotated Sorted Array either Left Half or Right Half is always sorted.

*/
#include <bits/stdc++.h>
int search_rotated_array(const std::vector<int>& arr, int target) {
    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[lo] <= arr[mid]) { // Left part is sorted
            if (arr[lo] <= target && target < arr[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } else { // Right part is sorted
            if (arr[mid] < target && target <= arr[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }

    return -1;
}

int search(std::vector<int>& arr, int target) {
    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        // Check if the target is at the middle position
        if (arr[mid] == target) {
            return mid;
        }

        // Determine the sorted half of the array
        if (arr[lo] <= arr[mid]) {
            // Left half is sorted
            if (arr[lo] <= target && target < arr[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } else {
            // Right half is sorted
            if (arr[mid] < target && target <= arr[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }

    // If the target is not found, return -1
    return -1;
}




int main(){
    std::vector<int> arr = {3,4,5,6,7,0,1,2};
    std::cout<<search_rotated_array(arr,0);
}