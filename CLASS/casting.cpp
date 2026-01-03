#include <iostream>
#include <typeinfo>

int main() {
    int i = 39;
    float j = 1.3;
    double d = 4.00;
    int k = 44;
    // std::cout<<typeid(i).name()<<std::endl;
    // std::cout<<typeid(j).name()<<std::endl;
    // std::cout<<typeid(d).name()<<std::endl;
    // std::cout<<typeid(k).name()<<std::endl;
    // const std::type_info &ti1 = typeid(i);
    // const std::type_info &ti2 = typeid(j);
    // const std::type_info &ti3 = typeid(k);
    // const std::type_info &ti4 = typeid(d);
    double d = static_cast<double>(i);
    return 0;
}