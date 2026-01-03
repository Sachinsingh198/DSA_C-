// #include <bits/stdc++.h>

// void sum_digit(int number, int &sum)
// {
//     if (number <= 0 and number <= 9)
//     {
//         return;
//     }
//     sum += number % 10;
//     sum_digit(number / 10, sum);
// }

// int calculate_power(int p, int q)
// {
//     if (q == 0)
//     {
//         return 1;
//     }
//     return calculate_power(p, q - 1) * p;
//     // Time complexit is O(q);
// }

// int calculatePower(int p, int q)
// {
//     // base case
//     if (q == 0)
//         return 1;
//     if (q % 2 == 0)
//     {
//         int res = calculatePower(p, q / 2);
//         return res * res;
//     }
//     else
//     {
//         int res = calculatePower(p, (q - 1) / 2);
//         return p * res * res;
//     }

//     // Time complexity : O(lag(q));
// }
// int calculate_sum(int number)
// {
//     if (number <= 0 and number <= 9)
//     {
//         return number;
//     }
//     // int sum_digits = 0;
//     // sum_digit(number,sum_digits);
//     return calculate_sum(number / 10) + number % 10;
//     ;
// }

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Function to generate permutations of the string
void string_permutation(std::string &str, int idx, std::vector<std::string> &ans) {
    if (idx == str.size() - 1) {
        ans.push_back(str);
        return;
    }

    for (int j = idx; j < str.size(); j++) {
        std::swap(str[idx], str[j]);
        string_permutation(str, idx + 1, ans);
        std::swap(str[idx], str[j]);
    }
}

// Function to check if a string is a palindrome
bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to check if any permutation forms a palindrome
bool forming_palindrome(const std::vector<std::string> &permutations) {
    for (const auto &perm : permutations) {
        if (isPalindrome(perm)) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string str = "geeksogeeks";
    std::string original = str;
    std::vector<std::string> ans;
    string_permutation(str, 0, ans);
    if (forming_palindrome(ans)) {
        std::cout << original << " can form a palindrome" << std::endl;
    } else {
        std::cout << original << " cannot form a palindrome" << std::endl;
    }

    return 0;
}
