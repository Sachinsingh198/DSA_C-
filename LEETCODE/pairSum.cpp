//REturn the pair in the sorted array with the target sum.
#include <bits/stdc++.h>

std::vector<int> PairSum_better(const std::vector<int>& arr, int target){
     std::vector<int> pair = {};
     int i = 0; 
     int j = arr.size() -1;
     while(i < j){
        if(arr[i] + arr[j] == target){
            pair.push_back(i);
            pair.push_back(j);
            return pair;
        }
       else if(arr[i] + arr[j] < target){
            i++;
        }
        else{
            j--;
        }
     }
}

int main(){
    std::vector<int> arr = {1,2,3,4,7,11,15,17};
    std::vector<int> pair = PairSum_better(arr,9);
    for(auto it: pair){
        std::cout<<it<<" ";
    } 
    std::cout<<std::endl;
}