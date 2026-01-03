#include <bits/stdc++.h>
/*Most of the thime to solve a problem related to array and strungs , we definitely need to read them.
*/
class Solution{
    public:
    void printArray(std::vector<int>& arr, int idx){
        if(idx == arr.size()) return;
        std::cout<<arr[idx]<<"\n";
        printArray(arr,idx + 1);
    }
    int maxValue(std::vector<int>& arr, int idx) {

        //recurrenc relation = max(arr[idx], f(arr, idx + 1))
        if(idx == arr.size() - 1) return arr[idx];
        return std::max(arr[idx],maxValue(arr,idx + 1));
    }
    int sum(std::vector<int>& arr, int idx){
        if(idx == arr.size() - 1) return arr[idx];
        return arr[idx] + sum(arr, idx + 1);
    }
};
int main(){
    Solution* s;
    std::vector<int> nums  = {1,2,38,4,5,6};
    // s->printArray(nums,0);
    std::cout<<s->maxValue(nums,0)<<std::endl;
    std::cout<<s->sum(nums , 0)<<std::endl;
    return 0;
}