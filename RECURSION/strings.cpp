#include <bits/stdc++.h>
class Solution
{
public:
    std::string removeOccurence(std::string &str1, int idx)
    {
        if (idx == str1.size())
        {
            return "";
        }
        std::string curr = "";
        curr += str1[idx];
        return ((str1[idx] == 'a') ? "" : curr) + removeOccurence(str1, idx + 1);
    }

    bool isPallindrome(int num, int *temp)
    {
        if (num >= 0 && num <= 9)
        {
            return (num == (*temp) % 10);
        }
        bool result = isPallindrome(num / 10, temp) and num % 10 == (*temp % 10);
        *temp /= 10;
        return result;
    }

    void printNumber(int n)
    {
        if (n < 1)
        {
            return;
        }
        printNumber(n - 1);
        std::cout << n << " ";
    }

    void print_k_multiples(int num, int k)
    {
        if (k < 1)
            return;
        print_k_multiples(num, k - 1);
        std::cout << num * k << " ";
    }

    /*Given a number n. Find the sum of natural numbers till n but with alternate signs
    Eg. 1 - 2 + 3 - 4 + 5 = 3
    */
    int sum_alternate_sign(int n)
    {
        if (n < 1)
            return 0;
        return sum_alternate_sign(n - 1) + ((n % 2 == 0) ? (-n) : n);
    }

    /*
    If we subtract a smaller number from a larger one, we can reduce the larger number, but the gcd of the numbers will not change.
    */
    int GCD(int x, int y)
    { ////Using Euclid subtraction algorithm
        // if((x - y) == 0 ) return (x < y)?x:y;
        // return GCD(((x>y)? x - y: y - x),((x > y)? y: x));

        ////Using Euclid division algorithm
        if (x % y == 0 || y % x == 0)
            return (x < y) ? x : y;
        return GCD(((x < y) ? y % x : x % y), (x > y) ? y : x);
    }

    // Check that the number "n" is armstrong or not
    int pow(int p, int q){
        if(q == 0) return 1;
        if(q % 2== 0){
            int res = pow(p, q/2);
            return res * res;
        }
        else{
            int res = pow(p,(q - 1)/2);
            return p * res * res; 
        }
    }

    int armstrong(int n, int d){
        if(n == 0) return 0;
        return pow(n % 10,d) + armstrong(n / 10,d);
    }

    void printSubsequences(std::string str, int i, std::string result, std::vector<std::string>& v){
        if(i == str.length()){
            v.push_back(result);
            return;
        }
        //inclusion 
        printSubsequences(str,i + 1,result + str[i],v);
        //exclusion
        printSubsequences(str,i + 1, result, v);
    }

    void printSubsets(std::vector<int>& arr, int i , std::vector<int> result, std::vector<std::vector<int>>& resultant){
        if(i == arr.size()){
            resultant.push_back(result);
            return;
        }
        result.push_back(arr[i]);
        printSubsets(arr, i + 1, result, resultant);
        result.pop_back();
        printSubsets(arr, i + 1, result, resultant);
    }

    void printSum(std::vector<int>& arr, int i , int sum ){
        if(i == arr.size()){
           std::cout<<sum<<" ";
            return;
        }
        
        printSum(arr, i + 1,sum + arr[i] );
        printSum(arr, i + 1, sum);
    }
};
int main()
{
    Solution s;
    // std::string str = "abcax";
    // int num = 112211;
    // int anatherNum = num;
    // int *temp = &anatherNum;
    // std::cout<<s.removeOccurence(str,0)<<std::endl;
    // std::cout<<s.isPallindrome(num , temp)<<std::endl;
    // s.printNumber(43999);
    s.print_k_multiples(2, 10);
    std::cout << std::endl;
    std::cout << s.sum_alternate_sign(5) << std::endl;
    std::cout << s.GCD(1000, 10000) << std::endl;

    int n = 1;
    int number = n;
    int digits = 0;
    while(number != 0){
        number /= 10;
        digits++;
    }
    int num = s.armstrong(n,digits);
    if(num == n){
        std::cout<<"is armstrong"<<std::endl;
    }
    else {
        std::cout<<"is not armstrong"<<std::endl;
    }

    std::string str = "abc";
    std::vector<std::string> v = {};
    s.printSubsequences(str, 0,"",v);
    for(auto it: v){
        std::cout<<"{ "<<it<<" },";
    }
    std::cout<<std::endl;

    std::vector<int> arr = {1,2,3};
    std::vector<std::vector<int>> resultant = {};
    std::vector<int> res = {};
    s.printSubsets(arr, 0, res, resultant);
    for(auto& subsets : resultant){
        std::cout<<"{ ";
        for(auto subset: subsets){
            std::cout<<subset;
        }
        std::cout<<" }";
    }
    std::cout<<std::endl;
    s.printSum(arr, 0, 0);
    return 0;
}