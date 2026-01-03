/*
Inssertion sort:
    Repeted;y ake elements from unsorted subarray and insert in sorted subarray.
    Time complexity:
        Worst case: O(n^2)
        Best case: O(n)
    Space complexity:
            O(1)
Application:
    # Where array is almost sorted
    # Few elements to sort

Is insertion sort Stable?
    Yes , Insertion sort is stable algorithm.


*/

#include <bits/stdc++.h>

void print(const std::vector<int>& arr){
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
}
void insertion_sort(std::vector<int>& arr){
    for(int i = 1; i< arr.size(); i++){
        int current = arr[i];
        //find the current position of out current element
        int j = i - 1;
        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j]; 
            j--;
        }
        //insert the current element
        arr[j + 1] = current;
        print(arr);
    }
}
int main(){
    std::vector<int> arr = { 11,8,15,9,4};
    print(arr);
    insertion_sort(arr);
    print(arr);
    return 0;
}