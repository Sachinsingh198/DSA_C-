#include <iostream>
#include <stdlib.h>
#include <string.h>
class String
{
private:
    enum
    {
        SZ = 80
    }; // static const int SZ = 50;
    char str[SZ];

public:
    String()
    {
        strcpy(str, "");
    }
    String(char s[]){
        strcpy(str, s);
    }
    void display() const {
        std::cout<<str<<std::endl;
    }
    String operator + (String ss) const{
        String temp;
        if(strlen(str) + strlen(ss.str) < SZ){
            strcpy(temp.str,str);//copy this string to the temp string
            strcat(temp.str , ss.str);//add the argument string
        } else {
            std::cout<<"String overflow!"<<std::endl;
            exit(1);
        }
        return String(temp);
    }
};

int main(){
    String s1 = "\nMarry Christmas!    ";
    String s2 = "Happy New Year!";
    String s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}