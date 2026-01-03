#include <iostream>
#include <vector>
#include <climits>

int findMedian(std::vector<int>& nums1, std::vector<int>& nums2){
    if(nums2.size() < nums1.size()){
        return findMedian(nums2, nums1);
    }

    int m = nums1.size();
    int n = nums2.size();
    int start = 0;
    int end = m;

    //find the partitions
    while(start <= end){
        int part1 = (start + end )/2;
        int part2 = (m + n + 1) / 2  - part1;

        int maxLeftnums1 = part1 == 0 ? INT_MIN:nums1[part1 - 1];
        int maxLeftnums2 = part2 == 0 ? INT_MIN: nums2[part2 - 1];

        int minrightnum1 = part1 == m?INT_MAX: nums1[part1];
        int minrightnum2 = part1 == n?INT_MAX: nums2[part2];

        if(maxLeftnums1 <= minrightnum2  && maxLeftnums2 <= minrightnum1){
            if((m + n) % 2 == 0 ){
                return (std::max(maxLeftnums1, maxLeftnums2)  + std::min(minrightnum1 , minrightnum2)) / 2;
            }
            else {
                return std::max(maxLeftnums1, maxLeftnums2);
            }
        }
        else if(maxLeftnums1 > minrightnum2){
            end = part1 - 1;
        }
        else{
            start = part1 + 1;
        }
    }

}
int main(){
    std::vector<int> nums1 = {1,2,3,4,5};
    std::vector<int> nums2 = {6,7,8,9};

    std::cout<<findMedian(nums1, nums2)<<std::endl;
    return 0;
}