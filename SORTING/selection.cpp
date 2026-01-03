/*
Repeatedly find minumum element in unsorted array and place it at the begining.
In the ith iteration we are selecting elements for the ith position

Time complexity:worst case=> O(n^2)
Time complexity: Best case: O(n^2)
Space Complexity: O(1)
Selection sort is an UnStable sorting algorithm.

Application of Selection Sorting algorithm:
    1. Maximum number of swaps is O(n).
*/

#include<bits/stdc++.h>

void printArray(const std::vector<int>&arr){
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
}
void selection_sort(std::vector<int>& arr)
{
    for(int i = 0; i<arr.size() - 1; i++){
        //Finding minumum elements in the unsorted array
        
        int min_idx = i;
        for(int j = i + 1; j < arr.size() ; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(i != min_idx){
        std::swap(arr[i], arr[min_idx]);
        }
        std::cout<<" Step "<< i + 1<<": ";
        printArray(arr);
    }
}
int main(){
    std::vector<int> arr = {64, 25, 12, 22, 11};
    
    selection_sort(arr);
    std::cout<<std::endl;
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
    return 0;
}