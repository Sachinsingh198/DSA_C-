/*
Time Complexity in Recursion:
    1. Recurrences relation
    2. TC = (tatal no. of recursive calls) * (work done in each call)

Space complexity in Recursion:
    SC = (height of call stack) * (memory in each call)
*/
#include <bits/stdc++.h>
class Recursion
{
public:
    int count = 1;
    void print_number(const int number)
    {
        if (count > number)
        {
            std::cout << std::endl;
            return;
        }
        std::cout << count << " ";
        count++;
        print_number(number);
    }

    int factorial(const int number) const
    {
        if (number == 0)
        {
            return 1;
        }
        return number * factorial(number - 1);
    }

    int calculate_sum(const int number)
    {
        if (number == 0)
        {
            return 0;
        }
        return number + calculate_sum(number - 1);
    }

    int fibonacci(const int number)
    {
        if (number == 0 || number == 1)
        {
            return number;
        }
        return fibonacci(number - 1) + fibonacci(number - 2);
    }

    bool isSorted(const std::vector<int> &arr, int n)
    {
        if (n == 0 || n == 1)
        {
            return true;
        }
        // bool isSort = false;
        // if(arr[n - 1] >= arr[n - 2]){
        //     isSort = true;
        // }
        // if(!isSort){
        //     return false;
        // }
        // isSort = isSorted(arr, n - 1);
        return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
    }

    int binarySearch(const std::vector<int> &arr, const int target, int start, int end)
    {
        if (start <= end)
        {
            if (arr[start] == target)
                return start;
            else if (arr[end] == target)
                return end;
            int mid = start + (end - start) / 2;
            if (arr[mid] > target)
            {
                start = mid + 1;
                binarySearch(arr, target, start, end);
            }
            else if (arr[mid] < target)
            {
                end = mid - 1;
                binarySearch(arr, target, start, end);
            }
            else
                return mid;
        }
        else return -1;
    }
};
int main()
{
    Recursion r;
    r.print_number(5);
    std::cout << r.factorial(5) << std::endl;
    std::cout << r.calculate_sum(5) << std::endl;
    std::cout << r.fibonacci(5) << std::endl;
    std::vector<int> num = {1, 2, 3, 4, 9};
    std::cout << r.isSorted(num, num.size()) << std::endl;
    std::cout << r.binarySearch(num, 39, 0, num.size() - 1);
}