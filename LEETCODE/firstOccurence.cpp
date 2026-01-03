#include <iostream>
#include <vector>
#include <algorithm>
class Occurence
{
private:
public:
    int first_occurence(std::vector<int> &v) const
    {
        int target;
        int lo = 0;
        int hi = v.size() - 1;
        int idx = -1;
        std::cout << "Enter your target: ";
        std::cin >> target;
        while (lo <= hi)
        {
            // int mid = lo + (hi - lo) / 2;
            int mid = (lo + hi) / 2;
            if (v[mid] == target)
            {
                if (mid > 0 && v[mid] == v[mid - 1])
                {
                    hi = mid - 1;
                }
                else
                {
                    idx = mid;
                    break;
                }
            }
            else if (v[mid] > target)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return idx;
    }
};
int main()
{
    Occurence o1;
    std::vector<int> vec = {2, 43, 63, 2, 2, 6, 2, 117, 7, 6};
    std::sort(vec.begin(), vec.end());
    std::cout << o1.first_occurence(vec);
    return 0;
}