// #include <bits/stdc++.h>
// class Class{
//     std::string name;
//     int age;
//     public:
//     Class(void){
//         std::cout<<"Constructor called!"<<std::endl;
//     }
//     Class(const std::string& name, const int& age){
//         this->name = name;
//         this->age = age;
//     }
//     void display(void){
//         std::cout<<"Name: "<<name<<std::endl;
//         std::cout<<"Age: "<<age<<std::endl;
//     }
//     void* operator new(size_t size){
//         std::cout<<"Overloading new Operator!"<<std::endl;
//         void* p =:: operator new (size);
//         return p;
//     }
//     void operator delete(void* p){
//         std::cout<<"Overloading delete operator!"<<std::endl;
//         free(p);
//     }
// };
// int main(){
//     Class* c = new Class("Sachin",18);
//     c->display();
//     delete c;
//     return 0;
// }

#include <bits/stdc++.h>
class Base{
    public:
    void print(void) const{
        std::cout<<"Base class Print"<<std::endl;
    }
    virtual void show(void) const{
        std::cout<<"Base class "<<std::endl;
    }   
};

class Derived : public Base{
    public:
    void print(void) const{
        std::cout<<"Derived class print"<<std::endl;
    }
    void show(void) const{
        std::cout<<"Derived class "<<std::endl;
    }
};
int myfun(int a){
    return a;
};
int myfun(int a, int b){
    return a + b;
};

class String{
    private:
    public:
    std::string str;
    String():str(""){}
    String(std::string str){
        this->str = str;
    }
    bool  operator ==(String str1) {
        return str1.str == str;
    }
};



int main(){
    // Base * bptr;
    // Derived d;
    // bptr = &d;
    // bptr->show();
    // bptr->print();
    // int(*fp)(int a);
    //     fp = myfun;
    // std::cout<<fp(4)<<std::endl;
    // int(*f)(int a, int b);
    //     f = myfun;
    // std::cout<<f(4,5)<<std::endl;
    String st("Sachin");
    String st2("S achin");
    
    if(st == st2){
        std::cout<<"Both strings are equal: "<<st.str << " = "<<st2.str<<std::endl;
    }
    else {
        std::cout<<"Both strings are not equal: "<<st.str<<" != "<<st2.str<<std::endl;
    }
}

/*
wap to store n integers using dynamic memory allocation then search and print the smallest available number along with index.
*/
