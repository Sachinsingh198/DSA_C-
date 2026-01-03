// #include<iostream>
// class Demo{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     void value();
//     friend class Hello;
// };
// void Demo:: value(){
//     a = 10;
//     b = 20;
// }
// class Hello{
//     public:
//     void display();
// };
// void Hello::display(){
//     Demo d;
//     d.value();
//     std::cout<<"Value of a is : "<<d.a<<std::endl;
//     std::cout<<"Value of b is : "<<d.b<<std::endl;
// };
// int main(){
//     Hello h;
//     h.display();
//     return 0;
// }

#include<iostream>
class Demo{
    private:
    int a;
    protected:
    int b;
    public:
    void value();
    friend class Hello;
};
void Demo::value(){
    a = 10;
    b = 20;
}
class Hello{
    public:
    void display(Demo &d);
};
void Hello::display(Demo &d){
    std::cout<<"Value of a is : "<<d.a<<std::endl;
    std::cout<<"Value of b is : "<<d.b<<std::endl;
}
int main(){
    Demo d;
    d.value();
    Hello h;
    h.display(d);
    return 0;
}
