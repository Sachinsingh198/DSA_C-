// /*Early Binding==> Compile time*/
// #include <iostream>
// class Base {
// private:
   
// public:
//     void show(void){
//         std::cout<<"Base Class"<<std::endl;
//     }
// };
// class Derived: public Base{
//     public:
//     void show(void){
//         std::cout<<"Derived Class"<<std::endl;
//     }
// };
// int main() {
//     Base* bptr = new Derived;
//     bptr->show();
//     return 0;
// }

// /*Late Binding==> Run time*/
// #include <iostream>
// class Base {
// private:
   
// public:
//     void virtual show(void){///Difference is Here
//         std::cout<<"Base Class"<<std::endl;
//     }
// };
// class Derived: public Base{
//     public:
//     void show(void){
//         std::cout<<"Derived Class"<<std::endl;
//     }
// };
// int main() {
//     Base* bptr = new Derived;
//     bptr->show();
//     return 0;
// }

#include <iostream>
#include <typeinfo>
class ClassName {
private:
   
public:
};
int main() {
    int i = 5;
    float f = 3.14;
    char c = 'a';
    std::cout<<typeid(i).name()<<std::endl;
    std::cout<<typeid(f).name()<<std::endl;
    std::cout<<typeid(c).name()<<std::endl;

    const std::type_info &ti1 = typeid(i);
    const std::type_info &ti2 = typeid(f);
    const std::type_info &ti3 = typeid(c);
    return 0;
}