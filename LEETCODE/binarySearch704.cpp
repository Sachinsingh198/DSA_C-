#include <iostream>
#include <vector>
#include <algorithm>
class Search{
    public:
    int search(std::vector<int>& arr, int target){
        int lo = 0, hi = arr.size() - 1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] > target){
                hi = mid - 1;
            }
            else lo = mid + 1; 
        }
        return -1;
    }
};
int main(){
    Search s;
    std::vector<int> arr;
    arr = { 1,3,5,565,342,63,21,74,10,12,34,86};
    std::sort(arr.begin(), arr.end());
    int tgt = 342;
    std::cout<<"index of target = "<<s.search(arr, tgt)<<std::endl;
}