/*Static memory allocation refers to the allocation of memory at compile-time, before the associated program is executed. The memory size is fixed and cannot be changed during runtime. This is in contrast to dynamic memory allocation, which allocates memory at runtime.

In C++, static memory allocation happens with:

Global Variables: Variables defined outside any function are allocated statically.

Local Static Variables: Variables declared with the static keyword inside a function retain their value across function calls.

Static Data Members: Static members of a class are shared among all objects of the class and are allocated statically.*/

#include <iostream>

int globalVar = 10; // Global variable, statically allocated

class Example
{
public:
    static int staticVar; // Static data member
    void show()
    {
        static int localStaticVar = 5; // Local static variable
        std::cout << "Local Static Var: " << localStaticVar << std::endl;
        localStaticVar++;
    }
};

int Example::staticVar = 20; // Definition of static member outside the class

int main()
{
    Example obj1, obj2;
    obj1.show();                                                    // Local Static Var: 5
    obj2.show();                                                    // Local Static Var: 6
    std::cout << "Global Var: " << globalVar << std::endl;          // Global Var: 10
    std::cout << "Static Var: " << Example::staticVar << std::endl; // Static Var: 20
}
