// "Repeatedly (until the array is sorted) swap two adjacent elements if in wrong order" Here, repeatedly means until the array get sorted
/*
Time complexity : O(n^2 )
Space complexity : O(1)

Stable Sort:
    Bubble Sort is a Stable algorithm.
    Does not disturb th order of elements with same value.
    eg: [40, 30, 10, 20, 30*]
    array after sorting: [10, 20, 30, 30*, 40]

Unstable Sort:
    Does'nt guarteed that the order of elements will change or not.
    eg: [40, 30, 10, 20, 30*]
    after sorting:  [10,20,30*,30,40] or [10, 20, 30, 30*, 40]
*/
#include <bits/stdc++.h>
void Bubblesort(std::vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// How to optimize the bubble sort in the case of nearly sorted arrays.
void nearlySorted(std::vector<int> &arr)
{
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                std::swap(arr[j], arr[j + 1]);
            }
        }
        if (!flag)
        {
            break;
        }
    }
}
int main()
{
    std::vector<int> arr = {4, 5, 2, 3, 1};
    Bubblesort(arr);
    for (auto it : arr)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    std::vector<int> arr1 = {10, 20, 40, 30, 50};
    nearlySorted(arr1);
    for (auto it : arr1)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    return 0;
}
