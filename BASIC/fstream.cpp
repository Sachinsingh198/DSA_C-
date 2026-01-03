// #include <iostream>
// class To{
//     private:
//     int marks;
//     public:
//     std::string name;
//     To Value(){
//         std::cout<<"Mark marks: ";
//         std::cin>>marks;
//     }
//     To display(){
//         std::cout<<marks<<std::endl;
//     }
// };
// int main(){
//     To obj;
//     obj.Value();
//     obj.display();
// }

//Returnning objects
// #include <iostream>
// class Example{
//     public:
//     int a;
//     Example sum(Example Ea , Example Eb){
//         Example Ec;
//         Ec.a = Ea.a + Eb.a;
//         return Ec;
//     }
// };
// int main(){
//     Example E1, E2, E3;
//     E1.a = 100;
//     E2.a = 200;
//     E3.a = 0;
//     E3 = E3.sum(E1,E2);
//     std::cout<<E1.a<<"\t"<<E2.a<<"\t"<<E3.a<<std::endl;
// }

// #include <iostream>
// class Example{
//     public:
//     int a;
//     void add(Example E){
//         a = a + E.a;
//     }
// };
// int main(){
//     Example E1, E2;
//     E1.a = 50;
//     E2.a = 100;
//     E1.add(E2);
//     std::cout<<E1.a<<" "<<E2.a<<std::endl;
//     return 0;
// }

// #include <iostream>
// class sum {
//     public:
//     int a;
//     int b;
//     void input();
//     void display();
// };
// void sum::input(){
    
//     std::cout<<"Enter the value of a: ";
//     std::cin>>a;
//     std::cout<<"Enter the value of a: ";
//     std::cin>>b;
    
// }
// void sum::display(){
//     int sum ;
//     sum = a + b;
//     std::cout<<"Sum is: "<<sum<<std::endl;
// }

// int main(){
//     sum s;
//     s.input();
//     s.display();
// }


#include <iostream>
class A{
    public:
    int a = 10;
};
class B {
    public:
    int y = 20;
};
class C: public A, public B{
    public:
    int sum;
   void func();
};
void C::func(){
    sum = a + y;
    std::cout<<"Sum of A and B is: "<<sum<<std::endl;
}
int main(){
    C obj;
    obj.func();
    return 0;
}