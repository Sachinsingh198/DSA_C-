// Given a non-negative integer "x" , returns the square root of "x" rounded down to the nearest integer. The returned integer should be non-negative as well. You must not use anu built in exponent functions or operator.

#include <iostream>
#include <algorithm>
#include <climits>
class Solution
{
public:
    // int mySqrt(int x)
    // {
    //     int hi = x;
    //     int lo = 0;
    //     int ans = -1;
    //     while (lo <= hi)
    //     {
    //         int mid = (hi + lo) / 2;
    //         if (mid * mid == x)
    //         {
    //             return mid;
    //         }
    //         else if (mid * mid > x)
    //         {
    //             hi = mid - 1;
    //         }
    //         else
    //         {
    //             lo = mid - 1;
    //             ans = mid;
    //         }
    //     }
    //     return ans;
    // }

    // int mySqrt(int x)
    // {
    //     int hi = x;
    //     int lo = 0;
    //     long long ans = -1;
    //     while (lo <= hi)
    //     {
    //         long long mid = (hi + lo) / 2;
    //         if (mid * mid == (long long)x)
    //         {
    //             return mid;
    //         }
    //         else if (mid * mid > (long long)x)
    //         {
    //             hi = mid - 1;
    //         }
    //         else
    //         {
    //             lo = mid + 1;
    //             ans = mid;
    //         }
    //     }
    //     return ans;
    // }

    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        int l = 1;
        int r = x;
        while (l < r)
        {
            uint64_t s = l + (r - l) / 2;
            if (s * s <= x && (s + 1) * (s + 1) > x)
                return s;
            else if (s < x / s)
                l = s + 1;
            else
                r = s;
        }
        return l;
    }
};

int main()
{

    Solution s;
    int x = 16;
    int sqrt = s.mySqrt(x);
    std::cout << "sqrt = " << sqrt << std::endl;
    return 0;
}