#include <iostream>
#include <vector>
#include <climits> 
// #include <algorithm>
class Subarray
{
public:
    void subarray(std::vector<int> &v)
    {
        int n = v.size();
        int count = 0;
        for (int st = 0; st < n; st++)
        {
            for (int end = st; end < n; end++)
            {
                for (int i = st; i <= end; i++)
                {
                    std::cout << v[i];
                }
                count++;
                std::cout << " ";
            }

            std::cout << std::endl;
        }
        std::cout << "The number of subarrays : " << count << std::endl;
        // Time complexity = O(n^3)
    }

    // BRUTE FORCE APPROACH FOR  MAXIMUM SUM OF SUBARRAY
    int maxsum_subarray(std::vector<int> &v)
    {
        int smax = 0;
        for (int st = 0; st < v.size(); st++)
        {
            int current_sum = 0;
            for (int end = st; end < v.size(); end++)
            {
                current_sum += v[end];
                smax = std::max(current_sum, smax);
            }
        }
        // Time complexity = O(n^2)
        return smax;
    }

    // KADANE'S ALGORITHM FOR MAXIMUM SUBARRAY SUM
    // Most optimised algorithms
    int kadanes(std::vector<int> &v)
    {
        int currsum = 0;
        int maxSum = INT_MIN;
        // for(int i = 0; i<v.size(); i++){
        //     currsum += i;
        //     maxSum = std::max(maxSum, currsum);
        //     if(currsum < 0){
        //         currsum = 0;
        //     }
        // }
        for (int i : v)
        {
            currsum += i;
            maxSum = std::max(maxSum, currsum);
            if (currsum < 0)
            {
                currsum = 0;
            }
        }
        return maxSum;
    }
};
int main()
{
    Subarray *s;
    std::vector<int> c = {1, 3, 4, 5, 3, 5, 2, 1, 7, 6};
    s->subarray(c);
    std::cout << s->maxsum_subarray(c) << std::endl;
    std::cout << s->kadanes(c) << std::endl;
    return 0;
}