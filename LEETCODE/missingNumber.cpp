// //returns the minumum non zero positive missing number
// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends

// class Solution {
//   public:
//     // Function to find the smallest positive number missing from the array.
//     int missingNumber(vector<int> &arr) {
//         // Your code here
//         int missing_number = 1;
//         sort(arr.begin(), arr.end());
//         auto last = unique(arr.begin(), arr.end());
//         arr.erase(last,arr.end());
//         for(int i = 0; i<arr.size(); i++){
//             if(arr[i] > 0){
//                 if(arr[i] == missing_number){
//                     missing_number++;
//                 }
//             }
//         }
//         return missing_number;
//     }
// };

// //{ Driver Code Starts.

// // int missingNumber(int arr[], int n);

// int main() {

//     // taking testcases
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {

//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }

//         Solution ob;
//         int result = ob.missingNumber(arr);
//         cout << result << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends

#include <bits/stdc++.h>
void delete_repeating_elements(std::vector<int>& arr){
    std::sort(arr.begin(), arr.end());
    for(int i = 0, j = 1; i< arr.size(), j<arr.size(); i++, j++){
        if(arr[i] == arr[j]){
            auto it = find(arr.begin(), arr.end(), arr[j]);
            arr.erase(it);
            --i,--j;
        }
    }
}

int main(){
    std::vector<int> arr= {0,0,7,3,6,9,7,1,5,0,3,5,1,2,2,4,5,2,6,5,3,5,5,5};
    delete_repeating_elements(arr);
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
    return 0;
}