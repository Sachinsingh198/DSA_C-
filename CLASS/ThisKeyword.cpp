// #include <iostream>

// class Cricketer{
//     public:
//     std::string name ;
//     int runs;
//     Cricketer (std::string name, int runs){
//         // name = name;//This give the garbage value for the runs as well as for the runs
//         // runs = runs;//To encounter with this problem we use "this->" keyword
//         this->name = name;
//         this->runs = runs;
//     }
// };
// int main(){
//     Cricketer c1("Virat Kohli",25000);
//     Cricketer c2("Rohit Sharma",20000);
//     std::cout<<c1.name<<"  "<< c1.runs<<std::endl;
//     std::cout<<c2.name<<"  "<< c2.runs<<std::endl;
//     return 0;
// }

#include <iostream>
#include <iomanip>
class Student{
    public:
    std::string name;
    int rln;
    int marks;
    Student(){    };
    Student(int rln, std::string name,int marks){
        this-> name = name;
        this->rln = rln;
        this->marks = marks;
    }
    void display(void){
        std::cout<<"Name: "<<name<<"\nRoll No: "<<rln<<"\nMarks: "<<marks<<std::endl;
    }
};
int main(){
    Student s1(48,"Sachin",28);
    s1.display();
    Student s2;
    s2.name = "Rahul";
    s2.rln = 43;
    s2.marks = 34;
    s2.display();
}