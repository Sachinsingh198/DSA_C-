//Given a sorted interger array and an interger 'x' , find the upper bound of  x.
//Upper bound: Index of the  Smallest element which is greater than given element.
#include <iostream>
#include <vector>
class LowerBound {
private:
   
public:
    int lowerBound(std::vector<int>& v , int target){
        int lo = 0;
        int hi = v.size() -1 ;
        while(lo <= hi){
            int mid = (lo + hi) / 2 ;

        }
    }

//Given a sorted array of non-negative distinct integers, find the smalles missing non- negative element in it.(Unique integers)
//let arr = [0,1,3,4,8,9] , Here the answer is 2, Brute force method is to check the index of each element, if (arr[i] ! == i) then the index will be our answer. But the time complexith for the same is O(n). But , if we should have to find the number using complexity O(log(n))., let if arr = [0,2,6,7,11,,13,14,15,16]

    int lowestMissingInteger(std::vector<int>& arr){
        int hi = arr.size() - 1;
        int lo = 0;
        int missingIndex = arr.size();
        while(hi >= lo){
            int mid = (hi + lo) /2;
            if(arr[mid] == mid){
                lo = mid + 1;
            }
            else {// arr[mid] != mid
                missingIndex = mid;
                hi = mid - 1;
            }
        }
        return missingIndex;
    }
    //Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
    

};
int main() {
    LowerBound lb;
    std::vector<int> arr = {0,2,6,7,11,13,14,15,16};
    int missing_int = lb.lowestMissingInteger(arr);
    std::cout<<"The Lowerst Non-Negative missing interger is ::"<<missing_int<<std::endl;
    return 0;
}