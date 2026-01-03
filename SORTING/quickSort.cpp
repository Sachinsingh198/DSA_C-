/*Divide and conquer rule is applicable for that particular algorithm
1. Divide the problem into sub-problems
2. Conquer (solve) ths sub problems
3. Combine solutions of the sub-problems.
(Find a pivot element for that particular array)

Choosing the pivot element:
    1. Last element.
    2.First element.
    3. Median.
    4. Random element.

Partition Algorithm:
    select a pivt element,
    initialize an iterator j = 0;
    initialize an iterator i = j-1;
    if the arr[i] < pivot element, then i = i + 1 and  swap arr[i] and arr[j];
    the iterator j moves till it reaches just befor the pivot element
    Now after the ith index , the elements will be greaten than the pivot element and elements for i>=0, elements are lesser than the pivot element.
    Which conclude that the sorted position of the pivot elements should be at the  (i+ 1)th index.
    After then we will swap the pivot element with the element with (i+1)th index.


Time and Space Complexity:
    Best Case: O(nlog(n))
    Worst Case:  
*/
#include <bits/stdc++.h> 
class Solution{
    public:
    int partition(std::vector<int>&arr, int first, int last){
        int pivot = arr[last];
        int i = first - 1; // for inserting element < pivot
        int j = first; //for finding element less than pivot

        for( ;j< last; j++){
            if(arr[j] < pivot){
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        //Now i will be pointing to the last element < pivot
        // correct position for pivot will be  i + 1
        std::swap(arr[i + 1], arr[last]);
        return i + 1;
    }
    void quickSort(std::vector<int>& arr, int first, int last){
        // base case
        if(first >= last){
            return;
        }

        //recursive case
        int pivot = partition(arr,first,last);
        quickSort(arr, first, pivot - 1);
        quickSort(arr, pivot + 1, last);
    }
};
int main(){
    Solution s;
    std::vector<int> arr = {20,12,35,16,18,30};
    s.quickSort(arr,0,arr.size() - 1);
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
}