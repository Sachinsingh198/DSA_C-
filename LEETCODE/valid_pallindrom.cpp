#include <iostream>
class Solution
{
public:
    bool isAlphanumeric(char ch) const
    {
        if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;
    }
    bool isPallindrom(std::string s){
        int st= 0, end = s.length() -1;
        while(st<end){
            if(!isAlphanumeric(s[st])){
                st++;
                continue;
            }
            if(!isAlphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st] != tolower(s[end]))){
                return false;
            }
            return true;
        }
    }
};

int main(){
    Solution s;
    std::cout<<s.isPallindrom("racecar")<<std::endl;
}
