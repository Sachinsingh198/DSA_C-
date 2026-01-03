/*
You need to print all numbers less than n which are having digits only 3 or 7 or both.
Eg.: I/P=> 10 , O/P=> 3,7
*/
#include <bits/stdc++.h>

//Without recursive funtion (Efficient way)
bool is_valid(int n){
    bool is_valid_digit = true;
    while(n != 0){
        int remainder = n % 10;
        if(remainder == 3 || remainder == 7){
            is_valid_digit = true;
        }
        else return false;
        n /= 10;
    }
    return true;
}
std::vector<int> number_generation(int n){
    std::vector<int> result;
    if(n < 3) return result;
    while(n){
        if(is_valid(n)) result.push_back(n);
        n--;
    }
    return result;
}

//kUsing recursive function call (Not much efficient way)
void number_generation_recursive(int n, std::vector<int>& result){
    if(n < 3) return ;
    bool flag = false;
    int new_n = n;
    while(new_n != 0){
        int remainder = new_n % 10;
        if(remainder == 3 || remainder == 7){
            flag = true;
        }
        else {
            flag = false;
            break;
        }
        new_n /= 10;
    }
    if(flag){
        result.push_back(n);
    }
    
    number_generation_recursive(n - 1, result);
}

std::vector<int> number(int n){
    std::vector<int> result;
    number_generation_recursive(n, result);
    return result;
}
int main(){
    int n ;
    std::cout<<"Enter the range of numbers: ";
    std::cin>>n;
    std::vector<int> result = number_generation(n);
    for(auto it: result){
        std::cout<<it<<std::endl;
    }
}