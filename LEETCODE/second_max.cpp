#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
class Solution {
private:
   
public:
    int s_max(std::vector<int>& arr){
        int max = INT_MIN;
        int smax = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            max = std::max(max , arr[i]);
        }                                                                               

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != max){
                smax = std::max(smax, arr[i]);
            }
        }
        return smax;
    }
};
int s_max(std::vector<int>& arr){
    int mx = INT_MIN;
    int smax = INT_MIN;
    bool all_equal = true;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > mx){
            smax = mx;
            mx = arr[i];
        }
        else if(arr[i] > smax && arr[i] != mx){
            smax = arr[i];
        }
        if( i>0 && arr[i] != arr[0]){
            all_equal = false;
        }
    }
    if(all_equal){
            return -1;
        }
        return smax;
}

void pushZeroToLast(std::vector<int>& arr){
    int nonZeroIndex = 0; // Move all non-zero elements to the front of the vector 
    for (int i = 0; i < arr.size(); i++) { 
        if (arr[i] != 0) { 
            std::swap(arr[i], arr[nonZeroIndex]); 
            nonZeroIndex++; 
            }
             }
}
int maximumProfit(std::vector<int> &arr) {
    if (arr.empty()) return 0;

    int min_price = INT_MAX;
    int max_profit = 0;

    for (int price : arr) {
        min_price = std::min(min_price, price);
        max_profit = std::max(max_profit, price - min_price);
    }

    return max_profit;
}
//Given an array arr[]. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in place.
/*
Examples:

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.
Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.
Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.
*/



int main() {
    Solution s;
    std::vector<int> arr = {12,0,12,0,12,12};
    // int smax = s.s_max(arr);
    std::cout << s_max(arr) << std::endl;
    // pushZeroToLast(arr);
    // for(auto it: arr){
    //     std::cout<<it<<" ";
    // }
    // std::cout<<std::endl;
    std::cout<<maximumProfit(arr)<<std::endl;
      return 0;
}