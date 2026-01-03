// #include <iostream>
// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     int prevSum = sum(n-1);
//     return n + prevSum;
// }
// int main(){
//     int n = 4;
//     std::cout<<sum(n)<<std::endl; 
//     return 0;
// }

// //  Calculate n raised to power of p
// #include <iostream>
// int power(int n,int p){
//     if(p == 0){
//         return 1;
//     }
//     int pow =power(n,(p-1));
//     return n*pow;
// }
// int main(){
//     int n = 2;
//     int p = 3;
//     std::cout<<power(n,p);
// }

// //Factorial of a number
// #include <iostream>
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     int prev_fact = factorial(n-1);
//     return n*prev_fact;
// }
// int main(){
//     int n = 5;
//     std::cout<<factorial(n);
// }

//Fibonacci number
#include <iostream>
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        std::cout<< fib(i)<<" ";
    }
   
}