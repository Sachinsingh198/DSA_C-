// Pointers: Special variables that store address of other variables
//  #include <iostream>
//  int main(){
//      int* null = NULL;//NULL pointer:A pointer that doesnt point to any location
//      std::cout<<null<<std::endl;//NULL pointer cant be derefrenced
//      std::cout<<*null<<std::endl;
//      // int a= 10;
//      // int* ptr = &a;
//      // int** ptr2 = &ptr;//Pointer to operator
//      // std::cout<<&ptr<<std::endl;
//      // std::cout<<ptr2<<std::endl;
//      // //Dereference operator(*): Value at address of pointer
//      // std::cout<<*(&a)<<std::endl;
//      // std::cout<<*(&a)<<std::endl;
//  }

// //A problem statement
// #include <iostream>
// int main(){
//     int a = 5;
//     int* p = &a;
//     int** q = &p;
//     std::cout<<*p<<std::endl;//value at the address of a
//     std::cout<<**q<<std::endl;//Value at the address of a
//     std::cout<<p<<std::endl;//&a: address of a;
//     std::cout<<*q<<std::endl;//&a : address of a;
//     std::cout<<*(&a)<<std::endl;//Value at the address of a;
// }

// //Pass by reference using pointers
// #include <iostream>
// // void changeA(int* ptr){//Data type should be a pointer to recieve address of any identifier
// //     *ptr = 20;
// // }
// //Passs by reference using alias
// void changeA(int &ptr){  //here & is not ampercend but is is alias
//     ptr = 20;
// }
// int main(){
//     int a = 10;
//     // changeA(&a);//To pass the memory address to any function we must have create a pointer inside the function
//     changeA(a);//For the use of alias
//     std::cout<<a<<std::endl;

//     return 0;
// }

// //Array pointer
// #include <iostream>
// #include <vector>
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     std::cout<<*arr<<std::endl;
// }

// //Increment / Decrement
// #include <iostream>
// int main(){
//     int a = 10;
//     int* ptr = &a;
//     std::cout<<ptr<<std::endl;//0x61ff08
//     ptr++;//ptr + 1
//     std::cout<<ptr<<std::endl;//0x61ff08 + 4 = 0x61ff0c
//     ptr + 2;
//     std::cout<<ptr<<std::endl;//0x61ff0c + 8 = 0x61ff
// }

// //Arithmatic operation on pointers
// #include <iostream>
// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int* ptr2;
//     int* ptr1 = ptr2 + 2;
//     std::cout<<ptr1 - ptr2<<std::endl;
// }

// //Pointers comparison
// #include <iostream>
// int main(){
//     int* ptr1;
//     int* ptr2;
//     std::cout<<ptr1<<std::endl;
//     std::cout<<ptr2<<std::endl;
//     std::cout<<(ptr1=ptr2)<<std::endl;
// }

// #include <iostream>
// #include <typeinfo>
// int main()
// {
//     int *p;
//     int r;
//     std::string name = "Sachin";
//     p = new int;
//     std::cout << typeid(p).name() << std::endl;
//     std::cout << typeid(r).name() << std::endl;
//     std::cout << typeid(name).name() << std::endl;
// }

// #include <iostream>
// #include <typeinfo>
// #include <cmath>
// int main(){
//     std::cout<<M_PI<<std::endl;
//     std::cout<<M_LOG10E<<std::endl;
//     std::cout<<typeid(M_PI).name()<<std::endl;
// }

// #include <iostream>
// int abs(int n){
//     return (n<0) ? -n: n;
// }
// int main(){
//     int a = 12;
//     std::cout<<abs(a);
// }

// #include <iostream>
// int main(){
//     int a = 2;
//     int &ref = a;
//     ref = 10;
//     std::cout<<"Value of a: "<<a<<std::endl;
//     std::cout<<"value of ref: "<<ref<<std::endl;
// }

// #include <iostream>
// class Demo{
//     public:
//     int x;
//     void display();
// };
// void Demo::display(void){
//     std::cout<<"x: "<<x<<std::endl;
// }
// int main(){
//     Demo obj;
//     obj.x = 10;
//     Demo* ptr = &obj;
//     ptr->display();
//     std::cout<<ptr->x;
//     return 0;
// }

#include <iostream>
int main(){
    int a = 3;
    int* b = &a;
    std::cout<<b;
}