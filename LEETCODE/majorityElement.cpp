//The element in the array which is greater than the  floor value of the size of array when divided by 2
#include<bits/stdc++.h>

// brute force approach
//Time complexity : O(n^2)
int majority_brute(const std::vector<int>& arr){
    for(int i = 0; i< arr.size(); i++){
        int counter = 1;
        for(int j = i + 1; j< arr.size(); j++){
            if(arr[i] == arr[j]){
                counter++;
            }
        }
        if(counter > arr.size()/2){
            return arr[i];
        }
        
    }
    return -1;
}

//Obtimized approach
//Time complexity : O(nlogn)
int majorityOptimize(std::vector<int>& arr){
    std::sort(arr.begin(), arr.end());
    int frequency = 1;
        int ans = arr[0];
    for(int i = 1; i< arr.size(); i++){
        
        if(arr[i] == arr[i - 1]){
            frequency++;
        }
        else{
            frequency = 1;
            ans = arr[i];
        }
        if(frequency > arr.size()/2){
            return ans;
        }
        
    }
}

//Moore's Voting Algorithm
//Time complexity: O(n)
int moores_algo(const std::vector<int>& arr){
    int majority = 0; 
    int count = 0;
    for(int i = 0; i< arr.size(); i++){
        if(count == 0){
            majority = arr[i];
        }
        if(majority == arr[i]){
            count++;
        }
        else count--;
    }
    return majority;
}


std::vector<int> findMajority(std::vector<int>& arr) {
    std::vector<int> nums;
    if (arr.empty()) {
        return nums;
    }

    int frequency = 1;
    int ans = arr[0];
    std::sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] == arr[i - 1]) {
            ++frequency;
        } else {
            if(frequency > arr.size()/3){
                nums.push_back(arr[i - 1]);
            }
            frequency = 1;
        }   
    }
    if(frequency > arr.size()/3){
        nums.push_back(arr[arr.size() - 1]);
    }
    return nums;
}


int main(){
    std::vector<int> arr = {3,1,3,3,3,3,3,3,1,3,1,2,2,2};
    std::cout<<moores_algo(arr)<<std::endl;
}