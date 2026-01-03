
 //Pallindrom number 
// #include <iostream>
// int main(){
//    int num;
//    int reverse = 0;
//    int original;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//    original = num;  
//    while(num != 0){
//       int remainder = num % 10;
//       reverse = reverse * 10 +remainder;
//       num = num/10;
//    }6 
//    if(reverse == original){
//       std::cout << "The number is a palindrome." << std::endl;
//    }
//    else{
//       std::cout << "The number is not a palindrome." << std::endl;
//    }
//    return 0;
// }

//Scope Resolution 
// #include <iostream>
// int x = 20;
// int main(){
//    int x = 10;
//    std::cout<< "value of global x  : " << ::x << std::endl;
//    std::cout<< "value of local x  : " << x << std::endl;
// }


// // To define function outside class
// #include <iostream>
// class A{
//    public:
//    void func();
// };
// void A::func(){
//    std::cout << "Function called" << std::endl;
// }
// int main(){
//    A a;
//    a.func();
//    return 0;
// }

// //To class Static Variable
// #include <iostream>
// class Demo{
//    static int x;
//    public:
//    static int y;
//    void fun(int x){
//       std::cout << "value of static x : "<< Demo :: x <<std::endl;
//       std::cout << "value of local x : "<<  x <<std::endl;
//    }
// };
// int Demo :: x = 10;
// int Demo :: y = 20;
// int main(){
//    Demo obj;
//    obj.fun(3);
//    std::cout<<"Value of y: "<<Demo::y<<std::endl;
// }

// //In case of multiple inheritence
// #include <iostream>
// class A{
//    public:
//    int  x = 10;
// };
// class B{
//    public:
//    int x = 20;
// };
// class C: public A,public B{
//    public:
//    void display(){
//       std::cout << "A class x: " << A::x << std::endl;
//       std::cout << "B class x : " << B::x << std::endl;
//    }
// };
// int main(){
//    C obj;
//    obj.display();
//    return 0;
// }

// //For using namespace
// #include <iostream>
// int main(){
//     std::cout << "Hello World" << std::endl;
//     return 0;
// }

// #include <iostream>
// int main(){
//    int num1 = 0;
//    int num2 = 1;
//    int fib = 0;
   
//    int n;
//    std::cout << "Enter the number of terms: ";
//    std::cin >> n;
//    if(n == 1){
//       std::cout << "Fibonacci series: " << num1;
//    }
//    else if(n == 2){
//       std::cout << "Fibonacci series: " << num1 << "  " << num2;
//    }
//    else{
//       for(int i = 0; i< n; i++){
//     std::cout << fib << " ";
//          fib = num1 + num2;
//          num1 = num2;
//          num2 = fib;
//       }
//    }
// }

//Pattern Printing

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         for(int j = 0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>


// int main() {
//     int n;
//     std::cout << "Enter the number of rows: ";
//     std::cin >> n;

//     for (int i = 0; i < n; i++) {  // Loop from 0 to n-1
//         for (int j = 0; j < n - i - 1; j++) {  // Print spaces
//             std::cout << "  ";
//         }
//         for (int j = 0; j <= i; j++) {  // Print stars
//             std::cout << "* ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }


// #include <iostream>
// class Example{
//    public:
//    int a;
//    void add(Example E){
//       a = a + E.a;
//    }
// };
// int main(){
//    Example E1,E2;
//    E1.a = 50;
//    E2.a = 100;
//    std::cout <<"Initial values :" <<E1.a<<" \t"<<E2.a<<std::endl;
//    E2.add(E1);
//    std::cout <<"After addition :" <<E1.a<<" \t"<<E2.a<<std::endl;
//    return 0;
// }

// #include <iostream>
// class Example{
//    public:
//    int a;
//    Example sum(Example Ea,Example Eb){
//       Example Ec;
//       Ec.a = Ea.a + Eb.a;
//       return Ec;
//    }
// };
// int main(){
//    Example E1,E2,E3;
//    E1.a = 100;
//    E2.a = 200;
//    E3.a = 0;
//    std::cout <<"Initial values :" <<E1.a<<" \t"<<E2.a <<"\t"<<E3.a<<std::endl;
//    E3 = E1.sum(E1,E2);
//    std::cout <<"After addition :" <<E1.a<<" \t"<<E2.a<<" \t"<<E3.a<<std::endl;
//    return 0;
// }

// //Magic number:
#include <iostream>
bool isMagic(int n){
    int sum = 0;
    while(n > 0 || sum >9){
        if(n == 0){
            n = sum;
            sum = 0;
        }
        sum = sum + n %10;
        n = n / 10;
    }
    return (sum == 1);
}
int main(){
    int n;
    std::cout<<"Enter any number: ";
    std::cin>>n;
    if(isMagic(n)){
        std::cout<<n <<" is a magic number"<<std::endl;
    }
    else{
        std::cout<<n <<" is not a magic number"<<std::endl;
    }
    return 0;
}

// Design C++ classes with static members, methods with default arguments, and friend functions. (For 
// example, design matrix and vector classes with static allocation, and a friend function to do matrix-vector 
// multiplication). 

// #include <iostream>
// int main(){
//     int arr[3][3]{{1,2,3},{4,5,6},{7,8,9}};
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<3; j++){
//             if(i == j){
//                 arr[i][j] = arr[i][j]*arr[j][i];
//             }
//     }
//     std::cout<<"\n";
// }
// return 0;
// }