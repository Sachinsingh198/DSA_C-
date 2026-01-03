//The element in the array which is greater than the  floor value of the size of array when divided by 2
#include<bits/stdc++.h>

// brite force approach
int majority(const std::vector<int>& arr){
    int counter = 1;
    for(int i = 0; i< arr.size(); i++){
        for(int j = i + 1; j< arr.size(); j++){
            if(arr[i] == arr[j]){
                counter++;
            }
        }
        if(counter > arr.size()/2){
            return arr[i];
        }
    }
}

int main(){
    std::vector<int> arr = {3,1,3,3,2,3,2,3,1,3,1,2,2,2};
    std::cout<<majority(arr)<<std::endl;
}