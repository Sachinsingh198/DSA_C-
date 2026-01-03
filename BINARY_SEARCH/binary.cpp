#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:

    // Binary Search Implementation
    int search(std::vector<int>& v, int target){
        int lo = 0;
        int n = v.size();
        int hi = n - 1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(v[mid] == target){
                return mid;
            }
            else if(v[mid] > target){
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        return -1;
    }

    //Given a sorted array of n elements and a target 'x'. Find the first occurence of 'x' in the array in the array. IF NOT EXISTS returns -1;
    int searchFirstOccure(std::vector<int>& arr, int target){
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

    ////Given a sorted array of n elements and a target 'x'. Find the last occurence of 'x' in the array in the array. IF NOT EXISTS returns -1;
    int searchLastOccure(std::vector<int> arr, int target){
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
            else{// arr[mid] == target
                if(arr[mid + 1] == target){
                    lo = mid + 1;
                }
                else{
                    return mid;
                }
            }
        }
        return -1;
    }
    
};



//Find first and last position of element in sorted array. [Leetcode 34]

int main(){
    Solution s;
    std::vector<int> v = {1,2,2,3,5,6,6,6,7,7,8};
    int target = 2;
    int index = s.searchLastOccure(v,target);
    std::cout<<"The index of the very first occurence of the "<<target<< " is  : "<<index<<std::endl;
    return 0;

}