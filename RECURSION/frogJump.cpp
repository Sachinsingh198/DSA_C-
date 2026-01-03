/*
Frog jump
*/
#include <bits/stdc++.h>
int minCost(std::vector<int> &H_arr, int n, int i)
{
    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return minCost(H_arr, n, i + 1);
    int iPlus1 = minCost(H_arr, n, i + 1) + abs(H_arr[i] - H_arr[i + 1]);
    int iPlus2 = minCost(H_arr, n, i + 2) + abs(H_arr[i] - H_arr[i + 2]);
    return (iPlus2 < iPlus1) ? iPlus2 : iPlus1;
}

/*
Given an array of n intgers and a target value x. Print wheather x exists in the array of not
*/
bool isPresent(std::vector<int> &arr, int x, int i)
{
    if (i > arr.size())
        return false;
    // if(arr[i] == x) return true;
    return (arr[i] == x) || (isPresent(arr, x, i + 1));
}

/*
Given an array of integers, print sums of all the subsets in it. Output sums can be printed in any order.
*/
// void sum_subsets(std::vector<int>& arr, int i, int sum, std::vector<int>& result){
//     if(i == arr.size() ){
//         result.push_back(sum);
//     }
//     sum_subsets(arr, i + 1, sum + arr[i], result);//inclusion
//     sum_subsets(arr,i+ 1, sum, result);//exclusion
// }

void sumSubsets(std::vector<int> &arr, int i, int sum, std::vector<int> &result)
{
    if (i >= arr.size() )
    {
        result.push_back(sum);
        return;
    }
    sumSubsets(arr, i + 1, sum + arr[i], result); // Pick the ith element
    sumSubsets(arr, i + 1, sum, result);          // Do not pick the ith element
}

//Rat in Maze problem.
int no_Ways(int i, int j, int m , int n){
    if(i ==(m - 1) and j == (n - 1)){
        return 1;
    } 
    if(i >= m or j >= n){
        return 0;
    }
    // if(i != (m - 1) && j == (n - 1)){
    //     no_Ways(i + 1, j, m, n);
    // }
    return no_Ways(i, j + 1, m , n) + no_Ways(i + 1, j, m, n);
    
}

//Print path of rat in maze
void print_path(int i, int j, int m, int n, std::string str){
    if(i > m || j > n) return;
    if(i == m && j == n){
        std::cout<<str<<std::endl;
    }
    print_path(i + 1, j,m,n,str + "D");
    print_path(i , j + 1,m,n,str + "R");

}
void printSubsequence(std::string& str, int i, std::string result,std::vector<std::string>& li){
    if(i == str.length()){
        li.push_back(result);
        return ;
    }
    // printSubsequence(str,i,result);
    printSubsequence(str,i + 1, result + str[i],li);
    // result.erase(result[i]);
    printSubsequence(str,i + 1 ,result,li);
}
void printSubsets(std::vector<int>&vec, int i, std::vector<int>& result, std::vector<std::vector<int>>& vec_result){
    if(i == vec.size()){
        vec_result.push_back(result);
        return;
    }

    result.push_back(vec[i]);
    printSubsets(vec,i + 1,result ,vec_result);//inclusion of the element
    result.pop_back();
    printSubsets(vec, i + 1, result, vec_result);//Exclusion of the element
}
int main()
{
    // std::vector<int> H_arr = {10, 30, 40, 20};
    // int min = minCost(H_arr, H_arr.size(), 0);
    // std::cout << min << std::endl;
    // std::cout << isPresent(H_arr, 10, 0);
    // std::vector<int> arr = {2, 4, 5};
    // std::vector<int> result;
    // std::cout << std::endl;
    // sumSubsets(arr, 0, 0, result);
    // for (auto it : result)
    // {
    //     std::cout << it << " ";
    // }
    // std::cout << std::endl;
    // std::cout<<no_Ways(0,0,3,3)<<std::endl;
    // std::string str = "abc";
    // std::string result = "";
    // std::vector<std::string> li;
    // std::vector<int> vec = {1,2,3};
    // printSubsequence(str, 0, result,li);
    // for(auto it: li){
    //     std::cout<<it<<" ";
    // }

    std::vector<int> vec = {1,2,3};
    std::vector<std::vector<int>> subsets = {};
    std::vector<int> result = {};
    printSubsets(vec,0,result,subsets);
    std::cout<<"hello"<<std::endl;
    for(const auto& subset: subsets){
        std::cout<<"{ ";
        for(auto it: subset){
            std::cout<<it<<" ";
        }
        std::cout<<"} ";
    }
    print_path(0,0,2,2, "");
}