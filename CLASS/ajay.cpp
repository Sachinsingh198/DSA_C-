// #include <iostream>
// using namespace std;
// int main(){ //
// cout<<"Hello, world!"<<endl;
//     int x = 4;
//     int y = 8;
//     // swap(x,y);
//     // int temp = x;
//     // x = y;
//     // y= temp;
//     x = x + y;
//     y = x - y;
//    x = x - y;

//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
// }

// #include<iostream>
// using namespace std;
// int x = 20;
// int main(){
//     int x = 10;
//     cout<< "value of global x  : " << :: x << endl;
//     cout<< "value of local x  : " << x << endl;

//     return 0;

// }

// #include<iostream>
// using namespace std ;
// class A {
//     public :
//     void func();

// };
// void A ::func(){
//     cout << "func() called" << endl;
// }

//     int main (){
//         A a;
//         a.func();
//         return 0;

//     }

// #include<iostream>
// using namespace std;
// class Demo {
//     static int x ;
//     public :
//     static int y ;
//         void func( int x ){
//             cout << "value of static x : "<< Demo :: x <<endl;
//             cout << "value of static y : " << Demo ::y << endl;
//

//         }

// };
// int Demo :: x = 10 ;
// int Demo :: y = 20;
// int main(){

//     Demo::func(5);
//     cout<< "value of y : "<< Demo::y<<endl;

//     return 0 ;
// }

// #include<iostream>
// using namespace std;
// class Demo {
//     static int x ;
//     public :
//     static int y ;

//     // Make func() static
//     static void func( int x ){
//         cout << "value of static x : "<< Demo :: x <<endl;
//         cout << "value of static y : "<< Demo :: y <<endl;
//     }
// };
// int Demo :: x = 10 ;
// int Demo :: y = 20;

// int main(){
//     // Now you can call it using the class name
//     Demo::func(5);
//     cout<< "value of y : "<< Demo::y<<endl;
//     return 0 ;
// }

// #include <iostream>
// using namespace std;

// void printRightHalfPyramid(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printRightHalfPyramid(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printInvertedRightHalfPyramid(int n) {
//     for (int i = n; i > 0; i--) {
//         for (int j = 0; j < i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printInvertedRightHalfPyramid(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printFullPyramid(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printFullPyramid(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printInvertedFullPyramid(int n) {
//     for (int i = n; i >= 1; i--) {
//         for (int j = n; j > i; j--) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printInvertedFullPyramid(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printDiamond(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << " ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = n; j > i; j--) {
//             cout << " ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     printDiamond(n);
//     return 0;
// }

#include <iostream>
enum shape
{
    circle,
    rectangle,
    triangle
};
int main()
{
    std::cout << "Enter shape code: ";
    int code;
    std::cin >> code;
    while (code >= circle && code <= triangle)
    {
        switch (code)
        {
        case circle:
            std::cout << "Enter shape code: ";
            break;
        case triangle:
            std::cout << "Enter shape code for triangle: ";
            break;
        case rectangle:
            std::cout << "Enter shape code for rectangle: ";
            break;
        }
        std::cout << "Enter shape code: ";
        std::cin >> code;
    }
    std::cout << "BYE \n";
    return 0;
}