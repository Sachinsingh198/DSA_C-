#include <iostream>
#include <string>
#include <algorithm>
std::string reverseStr(std::string str, int k)
{

    for (int i = 0; i < str.length(); i += 2*k)
    {
        int left = i;
        int right = std::min(i + k - 1, (int)str.length() - 1); //type casting because string length is an unsighned integer, from size_t
        while (left < right)
        {
            std::swap(str[left++], str[right--]);
        }
    }
    return str;
}
int squareDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    std::string str1 = "abcdefghi";
    int k = 2;
    std::string str2 = reverseStr(str1, k);
    std::cout << str2 << std::endl;
    int num = 54;
    std::cout<<squareDigits(num);
    return 0;
}