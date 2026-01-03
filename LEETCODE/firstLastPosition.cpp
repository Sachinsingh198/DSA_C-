#include <bits/stdc++.h>
class Solution
{
public:
    int firstOccurance(const std::vector<int>& arr, int target){
        int lo = 0;
        int hi = arr.size() - 1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(arr[mid]<target){
                lo = mid + 1;
            }
            else if(arr[mid] > target){
                hi = mid - 1;
            }
            else{ // arr[mid] == target
                if(mid > 0 && arr[mid - 1] == target){
                    hi = mid - 1;
                }
                else{
                    return mid;
                }

            }
        }
        return -1;
    }
    int lastOccurance(const std::vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size() - 1;
        
        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else if (nums[mid] > target)
            {
                hi = mid - 1;
            }
            else
            {
                if (mid > 0 && nums[mid + 1] == target)
                {
                    lo = mid + 1;
                }
                else
                {
                    return mid;
                }
            }
        }
        return -1;
    }
    std::vector<int> Starting_Ending_pos(const std::vector<int> &nums, int target)
    {
        std::vector<int> result = {};
        result.push_back(firstOccurance(nums,target));
        result.push_back(lastOccurance(nums,target));
        return result;
    }

    int search(const std::vector<int>& nums, int target){
        int hi = nums.size() - 1;
        int lo = 0;
        while(hi > lo){
            int mid = lo + (hi - lo)/ 2;
            if(nums[mid] > target){
                hi = mid - 1;
            }
            else if (nums[mid] < target){
                lo = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {1,2,3,4,5,5,5,6};
    std::vector<int> result = s.Starting_Ending_pos(nums,1);
    std::cout<<"[";
    std::cout<<result[0]<<" , "<<result[1];
    std::cout<<"]"<<std::endl;
    std::cout<<s.search(nums,7)<<std::endl;
}

