#include <iostream>
class ClassName {
private:
   
public:
     std::string name;
     int age;
     public:
     ClassName(): name(""),age(0){}
     ClassName(std::string name, int age){
        this->name = name;
        this->age = age;
     }
     void display(){
        std::cout<<"Your name is "<<this->name<<" and you are "<<this->age<<" year young"<<std::endl;
     }
     void* operator new(size_t size){
        std::cout<<"overloading new operator...."<<std::endl;
        void* p =:: operator new(size);
     }
     void operator delete(void* p){
        std::cout<<"Deeleting operator....."<<std::endl;
        free(p);
     }
};
int main() {
    ClassName* p = new ClassName("Sachin",19);
    p->display();
    delete p;
    return 0;
}
