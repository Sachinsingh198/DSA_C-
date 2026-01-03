/*
Steps:
Calculate the maximum subarray sum using Kadane's Algorithm.

Calculate the total sum of the array.

Invert the signs of the array elements and calculate the maximum subarray sum of the inverted array.

Subtract the result of step 3 from the total sum to get the maximum circular subarray sum.

The final result is the maximum of the values from steps 1 and 4.
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int kadane(const std::vector<int>& arr) {
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int num : arr) {
        current_sum += num;
        max_sum = std::max(max_sum, current_sum);
        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    return max_sum;
}

int total_sum(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int max_circular_sub_array_sum(std::vector<int>& arr) {
    // Step 1: Calculate the maximum subarray sum
    int max_subarray_sum = kadane(arr);

    // Step 2: Calculate the total sum of the array
    int total = total_sum(arr);

    // Step 3: Reverse the sign of the elements of the array
    for (auto& num : arr) {
        num = -num;
    }

    // Step 4: Calculate the maximum subarray sum of the inverted array
    int max_sub_arr_sum_inverted = kadane(arr);

    // Step 5: Calculate the maximum circular subarray sum
    int max_circular_sub_arraysum = total + max_sub_arr_sum_inverted;

    // Step 6: Handle the edge case for all negative numbers
    if (max_circular_sub_arraysum == 0) {
        return max_subarray_sum;
    }

    // The final result is the maximum of the values from steps 1 and 5
    return std::max(max_circular_sub_arraysum, max_subarray_sum);
}

int main() {
    std::vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    std::cout << "Maximum circular subarray sum: " << max_circular_sub_array_sum(arr) << std::endl;
    return 0;
}
