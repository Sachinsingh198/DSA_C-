#include <iostream>
class Base {
private:
   Base(){
    std::cout<<"Bse constructor"<<std::endl;
   }
public:
};

class derive1: virtual public Base{
    public:
    void print(){
        std::cout<<"Derived1 constructor"<<std::endl;
    }
};
class derive2: virtual public Base{
    public:
    void print(){
    std::cout<<"Derived2 constructor"<<std::endl;
    }
};
class child: public derive1, public derive2{//ambiguity occurs due to inheritance from the same base class Base
    public:
};
int main() {
    return 0;
}