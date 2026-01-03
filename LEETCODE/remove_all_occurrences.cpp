#include <iostream>
class Solution{
    public:
    std::string remove_occurence(std::string str, std::string sub_str){
        while(str.length()>0 && str.find(sub_str)<str.length()){
           {
                str.erase(str.find(sub_str),sub_str.length());
            }
        }
        return str;
    };
};

int main(){
    Solution s;
    std::cout<<s.remove_occurence("daabcbasbcbc","abc")<<std::endl;
    return 0;
}