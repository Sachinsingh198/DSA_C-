/*Mountain array : Array in which order of elements first increased strictly then decreased strictly
=> Peak element cannot be repeated twice.
eg. i). [1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,0,-1],
    ii). [1,45,78,89,76,34,23,-1]
    here in example (i) the peak index element is 8 and in example (ii) the peak index element is 89.
*/

#include <iostream>
#include <vector>
class Solution {
private:
public:
    int peakIndex(std::vector<int>& arr){
        int lo = 1; int hi = arr.size() - 2;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(arr[mid] > arr[mid -1] && arr[mid] < arr[mid + 1]){
                lo = mid + 1;
            }
            else if(arr[mid] < arr[mid -1] && arr[mid] > arr[mid + 1]){
                hi = mid -1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

    int peakIndexInMountainArray(std::vector<int>& arr) {
        int start = 1, end = arr.size() - 2;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
                return mid;
            } else if(arr[mid] > arr[mid-1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};
int main() {
    Solution s;
    std::vector<int> v= {23,56,78,987,-12,-34};
    int peak = s.peakIndex(v);
    std::cout << "peak: " << peak <<std::endl;
    return 0;
}
