#include <iostream>
#include<string>
#include <algorithm> // for std::reverse
class Reverse {
private:
   
public:
    std::string reverseWordd(std::string s){
        int n = s.length();
        std::string ans = "";
        std::reverse(s.begin(), s.end());
        for ( int i = 0;i <n ; i++){
            std::string word = ""; 
            while(i<n && s[i] != ' '){
                word += s[i];
                i++;
            }
            std:: reverse(word.begin(), word.end());
            if(word.length()> 0 ){
                ans += " " + word;
            }  
        }
        return ans.substr(1);
    }
};
int main() {
    Reverse r;
    std::cout<<r.reverseWordd("Hello, world!");
    return 0;
}