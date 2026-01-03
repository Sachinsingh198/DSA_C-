#include <bits/stdc++.h>
void f(std::string& str, int i , std::string result, std::vector<std::string>& li,std::vector<std::string>&v){
    if(i == str.size()){
        li.push_back(result);
        return;
    }
    int digit = str[i] - '0';
    if(digit <= 1){
        f(str,i + 1, result, li, v);
        return;
    }
    for(int j = 0; j < v[digit].size(); j++){
        f(str, i + 1,result + v[digit][j],li,v);
    }
    return;

}
int main(){
    std::vector<std::string> v(10); 
    v = {"","" ,"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    std::string str = "23";
    std::vector<std::string> li;
    f(str,0,"",li,v);
    for(auto st: li){
        std::cout<<st<<" ";
    }
    return 0;
}