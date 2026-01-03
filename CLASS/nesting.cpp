#include <iostream>
#include <string>
class binary
{
    std::string s;
    void chk_bin(void);

public:
    void read(void); 
    void ones(void);
    void display(void);
};
void binary::read(void)
{
    std::cout << "Enter a binary number: ";
    std::cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            std::cout << "Incorrect binary format!" << std::endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    std::cout << "Displaing your Binary numbers complement: " << std::endl;
    for (int i = 0; i < s.length(); i++)
    {
        std::cout << s.at(i);
    }
    std::cout << std::endl;
}
int main()
{
    // OOPs - Classes and Objects
    //  C++ --> intially call id --> C with classes by stroutsroup
    //  Class --> extension of structures (in C)
    //  Structures has limitations
    //              --> Members are public
    //              --> No Methods
    // classes = structures + more
    // classes--> can have methods and properties
    // classes--> can make few members as private & few as public
    // classes --> can make few members as public and few as public
    // structure in ++ are typedefed
    // you can declare objects along with the class declaration
    // Nesting of member functions
    binary b;
    b.read();
    b.ones();
    b.display();
    return 0;
}