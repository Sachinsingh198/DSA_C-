/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.
*/

#include <bits/stdc++.h>
int single_element_brute(const std::vector<int>& arr){
    int i = 0;
    while(i <arr.size()){
        int j  = i + 1;
        if(arr[j] == arr[i]){
            i += 2;
        }
        else {
            return arr[i];
        }
    }
    return -1;
}

int single_element_optimized(const std::vector<int>& arr){
    int lo = 0;
    int hi = arr.size() - 1;
    while( lo < hi){
        int mid = lo + (hi - lo)/2;
        if(mid % 2 == 1){
            mid--;
        }
        if(arr[mid] == arr[mid + 1]){
            lo = mid + 2;
        }
        else{
            hi = mid;
        }
    }
    return arr[lo];
}
int main(){
    std::vector<int> arr = {1,1,2,2,4,4,5,6,6};
    std::cout<<single_element_optimized(arr)<<std::endl;
}