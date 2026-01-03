#include <bits/stdc++.h>

int reverse_order(int x)
{
    int num = x;
    int remainder = num % 10;
    num /= 10;
    int new_num = remainder;
    while (num)
    {
        remainder = num % 10;
        num /= 10;
        if (new_num > INT_MAX / 10 || (new_num == INT_MAX / 10 && remainder > INT_MAX % 10))
        {
            return 0; // Overflow, return 0 or an appropriate error value
        }
        if (new_num < INT_MIN / 10 || (new_num == INT_MIN / 10 && remainder < INT_MIN % 10))
        {
            return 0; // Underflow, return 0 or an appropriate error value }
            new_num = (long long)new_num * 10 + remainder;
        }
         new_num = (long long)new_num * 10 + remainder;
    }
     return new_num;
}
    int main(){
        long long num = 24379;
        std::cout<<reverse_order(num);
        return 0;
    }