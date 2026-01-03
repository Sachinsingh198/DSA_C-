#include <bits/stdc++.h>
class Solution
{
public:
    int firstMissingPositive(std::vector<int> &nums)
    {
        int count = 1;
        bool flag = true;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                if (nums[i] == nums[i + 1])
                {
                    flag = true;
                }
                else
                    flag = false;
                if (!flag)
                {
                    count++;
                }
            }
            if(!flag && count != nums[i]){
                return count;
            }
            
        }
        return count + 1;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {1, 2, 0};
    std::cout<<s.firstMissingPositive(nums)<<std::endl;
    return 0;
}