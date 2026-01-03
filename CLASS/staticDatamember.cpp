#include <iostream>
class employee
{
    int id;
    static int count; // static int count = 100(gives an error "Syntax error")

public:
    void setData(void)
    {
        std::cout << "Enter your employee ID: ";
        std::cin >> id;
        count++;
    }
    void getData()
    {
        std::cout << "Employee id is : " << id <<std::endl<< "This is employee number : " << count << std::endl;
    }
    static void getCount(void)
    {
        //std::cout<<id<<std::endl;//It will throw an error
        //in the static function only static data member can be accesses
        std::cout << "The value of count is : " << count << std::endl;
    }
};
int employee ::count; // Default value of static variable is '0'
// int employee ::count = 1000;//Initialising the staic member outside class will not through any syntax error

int main()
{
    employee harry, sachin, mohit;
    // count is the static data member of the class employee
    harry.setData();
    harry.getData();
    employee::getCount();

    sachin.setData();
    sachin.getData();
    employee::getCount();

    mohit.setData();
    mohit.getData();
    employee::getCount();

    return 0;
}