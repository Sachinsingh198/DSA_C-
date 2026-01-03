//my code
#include <bits/stdc++.h>
class Solution {
public:
std::vector<int> twoSum(std::vector<int>& num, int target){
    int n = num.size();
    for(int i = 0; i<n - 1; i++){
        for(int j = i + 1; j<n; j++){
            if(num[i] + num[j] == target){
                return {i,j};
            }
        }
    }
    return {};//No solution found
}

std::vector<int> twoSum_optimized(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {}; // No solution found
}

    
    };
    int main(){
        return 0;
    }

    // Leetcode code with minimum time complexity
    // class Solution {
    // public:
    // std::vector<int> twoSum(std::vector<int>& nums, int target) {
    //     std::unordered_map<int, int> map;
    //     for (int i = 0; i < nums.size(); ++i) {
    //         int complement = target - nums[i];
    //         if (map.find(complement)!= map.end()) {
    //             return {map[complement], i};
    //         }
    //         map[nums[i]] = i;
    //     }
    //     return {};
    // }
    // };