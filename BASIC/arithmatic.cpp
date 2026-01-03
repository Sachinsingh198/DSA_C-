// #include <iostream>
// using namespace std;
// class person
// {
//     char name[30];
//     int age ;
//     public:
//     void getData();
//     void display();
// };//class definition always ends with semicolon;

// void person::getData(){
//     cout <<"Enter name:";
//     cin>>name;
//     cout<<"Enter age:";
//     cin>> age;
// }

// void person::display(){
//     cout<<"Name:"<<name<<endl;
//     cout<<"Age:"<<age<<endl;
// }
// int main(){
//     person p;
//     p.getData();
//     p.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class add

{
public:
    int num1, num2;
    int sum;

    void getNum();
    void sumNum();
    void Add();
};

void add::getNum()
{
    cout << "Enter the Number1: ";
    cin >> num1;
    cout << "Enter the Number2: ";
    cin >> num2;
}

void add::sumNum()
{
    sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    cout << num1 << " + " << num2 << " = " << sum << endl;
}

int main()
{
    add s;
    s.getNum();
    s.sumNum();
    return 0;
}
