// #include <bits/stdc++.h>
// class Solution
// {
// public:
//     void rearrange(std::vector<int> &arr)
//     {
//         for(int i = 0; i< arr.size(); i++){
//             while(arr[i] != -1 && arr[i] != i){
//                 int temp = arr[i];
//                 if(arr[temp] = temp) break;
//                 std::swap(arr[temp], arr[i]);
//             }
//         }
//         for(int i = 0; i<arr.size(); i++){
//             if(arr[i] != i){
//                 arr[i] = -1;
//             }
//         }
//     }
// };

// int main()
// {
//     Solution s;
//     std::vector<int> arr = {1, -1, 6, 1, 9, 3, 2, -1, 4, 1};
//     s.rearrange(arr);
//     for (auto it : arr)
//     {
//         std::cout << it << " ";
//     }
//     std::cout << std::endl;
// }
#include <bits/stdc++.h>
#include <stdexcept>
// int main(){
//     try{
//         int age = 14;
//         if(age >= 18){
//             std::cout<<"Access Granted!"<<std::endl;
//         }
//         else throw(age);
//     }
//     catch(int n){
//         std::cout<<"Access denied!"<<std::endl;
//         std::cout<<"Age is : "<<n<<std::endl;
//     }
// }

class Calculate
{
private:
    double numerator;
    double denominator;

public:
    Calculate(double num, double denum) : numerator(num), denominator(denum) {};
    double calculate(void)
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Division by zero is not allowed!");
        }
        return numerator / denominator;
    }
};
int main()
{
    Calculate div(10, 0);
    try
    {
        std::cout << "Result: " << div.calculate() << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }
    std::cout << "Program continues........" << std::endl;
    return 0;
}