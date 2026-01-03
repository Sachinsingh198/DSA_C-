// Run time polymorphism
#include <iostream>
class BaseClass
{
private:
public:
    int var_base = 10;
    virtual void display()
    {
        std::cout << "Displaying base class variable var_base: " << var_base << std::endl;
    }
};
class DerivedClass : public BaseClass
{
    int var_der = 20;
    void display()
    {
        std::cout << "Displayig Base class variable " << var_base << std::endl;
        std::cout << "Displayig Derived class variable " << var_der << std::endl;
    }
};
int main()
{
    BaseClass *bptr;
    BaseClass obj_b;
    DerivedClass obj_d;
    bptr = &obj_d;
    bptr->display();
    return 0;
}
/*
bptr = &obj_d;
bptr->display();
After ointing base class object to the derived class obect:
    it again point towards the base class object which is default value.
    To deal with this we have the concept of virtual function.
    after this , This will point to the derived class object.
*/