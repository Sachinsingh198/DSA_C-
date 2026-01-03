#include <bits/stdc++.h>
class Solution {
public:
    void getSubsets(std::vector<int>& arr, std::vector<int>& ans, int i, std::vector<std::vector<int>>& subsets) {
        if (i == arr.size()) {
            // store subsets
            subsets.push_back(ans);
            return; // exit function
        }
        // include
        ans.push_back(arr[i]);
        getSubsets(arr, ans, i + 1, subsets);
        ans.pop_back(); // backtrack
        // exclude
        getSubsets(arr, ans, i + 1, subsets);
    }

    std::vector<std::vector<int>> subsets(std::vector<int>& arr) {
        std::vector<std::vector<int>> allSubsets;
        std::vector<int> ans;
        getSubsets(arr, ans, 0, allSubsets);
        return allSubsets;
    }
};

int main() {
    Solution s;
    std::vector<int> arr = {1, 2, 3};
    std::vector<std::vector<int>> allsubsets = s.subsets(arr);
    std::cout<<"[ ";
    for (const auto& subset : allsubsets) {
        std::cout << "{ ";
        for (int val : subset) {
            std::cout << val << " ";
        }
        std::cout << "}, ";
    }
    std::cout << "]" << std::endl;
    return 0;
}
