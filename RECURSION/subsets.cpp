#include <bits/stdc++.h>
class Solution{
    public:
    void PrintSubset(std::vector<int>& arr, std::vector<int>& ans, int i){//array will be passed by reference
        if(i == arr.size()){
            for (int val: ans){
                std::cout<<val<<" ";
            }
            std::cout<<std::endl;
            return;
        }
        
        //inclusion of that particular element in the subset
        ans.push_back(arr[i]);
        PrintSubset(arr,ans,i+ 1);

        ans.pop_back(); //backtrack
        //exclusion
        PrintSubset(arr,ans,i+1);

    }
    void PrintSubsetSum(std::vector<int>& arr, int i){
        
    }
}; 
int main(){
    Solution sl;
    std::vector<int> arr = {1,2,3};
    std::vector<int> ans = {};
    sl.PrintSubset(arr,ans,0);//initially the index is 0
}