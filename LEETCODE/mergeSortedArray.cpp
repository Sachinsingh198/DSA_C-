#include <iostream>
#include <bits/c++config.h>
#include <vector>
#include <algorithm>
class Solution{
    public:
    void merge(std::vector<int>& nums1,int m, std::vector<int>& nums2,int n){
        int idx = m+n-1,i = m - 1, j = n - 1;
        while (i>= 0 && j>= 0){
            if(nums1[i] >= nums2[j]){
                nums1[idx--] = nums1[i--];
            }else {
                nums1[idx--] = nums2[j--];
            }
        }
        while ( j>= 0){
            nums1[idx--] = nums2[j--];
        }
    }
};
int main(){
    Solution A[] = {1,2,3,0,0,0};
    Solution B[] = {2,5,6};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

}