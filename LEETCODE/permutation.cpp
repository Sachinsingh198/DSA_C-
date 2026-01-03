#include <bits/stdc++.h>
class Solution{
    public:

    void getPermutation(std::vector<int>& nums, int idx, std::vector<std::vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back({nums});
            return;
        }
        for (int i = idx; i< nums.size(); i++){
            std::swap(nums[i], nums[idx]);
            getPermutation(nums,idx + 1, ans );
            std::swap(nums[i], nums[idx]); //backtracking
        }
    }
    /*
    Time complexity : O(n! * n)
    Space complexity : O(n!)
    */
    std::vector<std::vector<int>> permutation(std::vector<int>& nums){
        std::vector<std::vector<int>> ans;
        getPermutation(nums, 0, ans);
        return ans;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {1,2,3};
    std::vector<std::vector<int>> ans = s.permutation(nums);
    for(const auto& permutations : ans){
        for(auto it: permutations){
            std::cout<<it<<" ";
        }
        std::cout<<std::endl; 
    }
}