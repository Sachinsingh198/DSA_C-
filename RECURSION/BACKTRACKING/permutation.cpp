#include <bits/stdc++.h>

// permutaion

void printP(std::string str, std::string t, std::vector<std::string> &list)
{
    if (str.size() == 0)
    {
        list.push_back(t);
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        std::string left = str.substr(0, i);
        std::string right = str.substr(i + 1);
        std::string rem = left + right;
        printP(rem, t + ch, list);
    }
}

void printPBacktrack(std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, std::vector<bool> &isVisited)
{
    int n = arr.size();
    if (list.size() == n)
    {
        std::vector<int> ls;
        for(auto it: list){
            ls.push_back(it);
        }
        ans.push_back(ls);
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (!isVisited[i])
        {
            list.push_back(arr[i]);
            isVisited[i] = true;
            printPBacktrack(arr, list, ans, isVisited);
            isVisited[i] = false;
            list.pop_back();
        }
    }
    
}

void printPBacktrackM2(std::vector<int>& arr, int idx, std::vector<std::vector<int>>& ans){
    if( idx == arr.size() - 1){
        std::vector<int> l;
        for(int i = 0; i < arr.size(); i++){
            l.push_back(arr[i]);
        }
        ans.push_back(l);
        return;
    }
    for(int i = idx; i< arr.size(); i++){
        std::swap(arr[i], arr[idx]);
        printPBacktrackM2(arr, idx + 1, ans);
        std::swap(arr[idx],arr[i]);
    }
}
std::vector<std::vector<int>> permutation(std::vector<int> &arr, int i, std::vector<int> &res, std::vector<std::vector<int>> &result)
{
}
int main()
{
    // std::string str = "abc";
    // std::vector<std::string> list = {};
    std::vector<int> arr = {1, 2, 3};
    std::vector<int> list;
    std::vector<std::vector<int>> ans = {};
    std::vector<bool> isVisited;
    printPBacktrackM2(arr, 0, ans);
    for (const auto &permutation : ans)
    {
        std::cout<<"{";
        for (const auto &print : permutation)
        {
            std::cout<<" "<<print<<"";
        }
        std::cout<<"},";
    } 
    return 0;
}