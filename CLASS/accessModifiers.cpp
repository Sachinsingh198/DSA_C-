#include <iostream>
class Student
{
public:
    int rno;
    std::string name;
    Student(){

    }
    Student(int rno, std::string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    float getMarks(){ ///Getter function
        return this->marks;
    }
    void setMarks(){
        std::cout<<"Enter marks: ";
        std::cin>>this->marks;
    }
    private:
    float marks;
    
};
int main()
{
    Student s1(48,"Sachin",98.5);
    
   std::cout<<"The Marks you obtained are: "<<s1.getMarks()<<std::endl;
   s1.setMarks();
   std::cout<< "The Marks you obtained are: "<<s1.getMarks()<<std::endl; 
    return 0;
}