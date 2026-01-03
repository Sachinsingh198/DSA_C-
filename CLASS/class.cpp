// //Constructors 
// #include <iostream>
// #include <iomanip>

// class Student {
//     public:
//     std::string name;
//     int rno;
//     float gpa;    

//     Student(std:: string s, int r, float g){
//         name = s;
//         rno = r;
//         gpa = g;
//     }
// };

// int main(){
//     Student s1("Sachin Singh", 48, 6.9);
//     // s1.name = "Sachin Singh";
//     // s1.gpa = 6.9;
//     // std:: cout<<"Enter your Roll Number: "<<std::endl;
//     // std::cin>> s1.rno;

//     Student s2("Rohan",57,23);
//     // s2.name = "Rohan";
//     // s2.gpa = 10.00;
//     // std:: cout<<"Enter your Roll Number: "<<std::endl;
//     // std::cin>> s2.rno;

//     std::cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<std::endl;
//     std::cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<std::endl;
    
//     return 0;
// }

// #include <iostream>
// class base{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     base func(){ a = 10; b = 20;}
//     friend void friendfunc(base obj);
// };
// void friendfunc(base obj){
//     std::cout<<"Value of a is "<<obj.a<<std::endl;
//     std::cout<<"Value of b is "<<obj.b<<std::endl;
// }
// int main(){
//     base objb;
//      objb = objb.func();
//     friendfunc(objb);
//     return 0;
// }

// #include <iostream>
// #include <string>

// class beta; //needed for a friend function declaration
// class alpha{
//     private:
//     int data;
//     public:
//     alpha() : data(3){ } // No arguments constructor
//     friend int friefunc(alpha ,beta); // friend function declaration
// };

// class beta
//     private:
//     int data
//     publia
//     beta(): data(7){ a
//     friend int friefunc(aaha , beta);// friend function
// a

// int friefunc(alpha a, beta b){
//     return (a.data + b.data);
// }
// int main(){
//     alpha aa;
//     beta bb;
//     std::cout<<friefunc(aa, bb)<<std::endl;
// }

// #include <iostream>
// #include <string>
// class Swap1;
// class Swap{
//     private:
//     int num1;
//     public:
//     Swap(int n1): num1(n1){};
//     friend int display(Swap,Swap1);
// };

// class Swap1{
//     private:
//     int num2;
//     public:
//     Swap1(int n2): num2(n2){};
//     friend int display(Swap , Swap1);
// };

// void displa(int x , int y){
//     std::cout<< "num1 = "<<x<<std:: endl;
//     std::cout<< "num2 = "<<y<<std:: endl;
//     }
// int display(Swap a, Swap1 b){
    
//    a.num1 = a.num1 + b.num2;
//    b.num2 = a.num1 - b.num2;
//    a.num1 = a.num1 - b.num2;
//    displa(a.num1, b.num2);
// }

// int main(){ 

//     int n1;
//     int n2;
//     std::cout<<"Enter the number 1: ";
//     std::cin>>n1;
//     std::cout<<"Enter the number 2: ";
//     std::cin>>n2;
//     Swap aa(n1);
//     Swap1 bb(n2);
//     display(aa,bb); 
//     int a = 4;
//     int b = 8;
//     displa(a,b);
//     return 0;
// }
