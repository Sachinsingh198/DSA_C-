//A typre of function which have no return type not even a void
//Name always starts with the name of class
#include <iostream>
#include <string>
class Student {
    public:
    std::string name;
    int rno;
    float gpa;

    Student(){//Default cocstructor(Automatically included with the class)

    }

    Student(std:: string s,int r, float g){//Parameterized constructor(Declared by the user)
        name = s;
        rno = r;
        gpa = g;
    }
};
int main(){
    Student s1("Sachin singh",48,6.3);//Works only when a parameterized constructor is initialised within the class
    // Student s2("Himanshu", 46,5.4);
    Student s2;
    s2.name = "Himanshu";//Works only with default constructor
    s2.rno = 46;
    s2.gpa = 5.4;

    Student s3 = s1;
    s3.name = "Manish";//Deep copy 
    Student s4(s3);// Copy constructor - deep copy
    s4.name = "Aakash";

    std:: cout<< s1.name<<"  "<<s1.gpa<<"  "<<s1.rno<<"  "<<std::endl;
    std:: cout<< s2.name<<"  "<<s2.gpa<<"  "<<s2.rno<<"  "<<std::endl;
    std:: cout<< s3.name<<"  "<<s3.gpa<<"  "<<s3.rno<<"  "<<std::endl;
    std:: cout<< s4.name<<"  "<<s4.gpa<<"  "<<s4.rno<<"  "<<std::endl;
}
/*
Paasing Objects to fuctions
By default : It is always done by Pass by value
And if we use "&" before it , this will be with paas by Reference
*/