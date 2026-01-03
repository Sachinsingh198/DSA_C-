// Static data member
#include <iostream>
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        std::cout << "Enter Employee id: ";
        std::cin >> id;
        count++;
    }
    void getData()
    {
        std::cout << "The id of the employee is :" << id << std::endl;
        std::cout << "This is employee number count: " << count << std::endl;
    }
};

int Employee ::count; // Default value is 0
int main()
{
    Employee Saksham;
    Saksham.setData();
    Saksham.getData();

    Employee Sachin;
    Sachin.setData();
    Sachin.getData();

    Employee Jatin;
    Jatin.setData();
    Jatin.getData();
}