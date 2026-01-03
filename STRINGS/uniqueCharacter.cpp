/*You are given an array of Strings. You have to find a string s such that it is a concatination of sub-sequence*/

#include <iostream>
#include <vector>
#include <string>
#include <climits>
int Func(std::vector<std::string> &v, int i, std::string s)
{
    // Base case
    if (i == v.size())
    {
        int freq[26] = {0};
        for (int k = 0; k < s.length(); k++)
        {
            if (freq[s[k] - 'a'] == 1)
                return 0;

            freq[s[k] - 'a']++;
        }
        return s.length();
    }
    // We can include the ith string
    int opt1, opt2;
    opt1 = opt2 = INT_MIN;
    if (s.length() + v[i].length() < 26)
    {
        opt1 = Func(v, i + 1, s + v[i]);
    }
    // We can exclude the ith string
    opt2 = Func(v, i + 1, s);
    return std::max(opt1, opt2);
}
int UnqueString(std::vector<std::string> &v)
{
    std::string s = "";
    return Func(v, 0, s);
}
int main()
{
    std::vector<std::string> v;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        v.push_back(s);
    }
    std::cout << UnqueString(v) << std::endl;
}