#include <bits/stdc++.h>
int toInteger(std::string& str){
    // return std::stoi(str);
    int num = 0;
    int sign = 1;
    int i = 0;
    if(str[0] == '-'){
        sign = -1;
        i++;
    }
    while(i < str.length()){
        num = num* 10 + (str[i] - '0');
        i++;
    }
    return num * sign;
}
int main(){
    std::string str = "1234";
    std::cout<<toInteger(str)<<std::endl;
}