// #include <iostream>

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

//     // Overload the + operator to add two Complex objects
//     Complex operator + (const Complex& obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     void display() {
//         std::cout << real << " + " << imag << "i" << std::endl;
//     }
// };

// int main() {
//     Complex c1(3.3, 4.4);
//     Complex c2(1.1, 2.2);
//     Complex c3 = c1 + c2; // Uses overloaded operator
//     c3.display();
//     return 0;
// }

// #include <iostream>
// class Demo{
//     int num = 8;
//     public:
//     void operator ++(){//void Demo:: operator ++()
//         num =num + 2;
//     }
//     void display(){
//         std::cout << num << std::endl;
//     }
// };
// int main(){
//     Demo obj;
//     ++obj;
//     obj.display();
//     Demo obj2;
//     ++obj2;
//     obj2.display();
// }

// #include <iostream>
// class Student
// {
//     std::string name;
//     int age;

// public:
//     Student()
//     {
//         std::cout << "constructor" << std::endl;
//     }
//     Student(std::string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         std::cout << "Name: " << name << ", Age: " << age << std::endl;
//     }
//     void *operator new(size_t size)
//     {
//         std::cout << "overloading new operator with size: " << size << std::endl;
//         void *p = ::operator new(size); // void *p = melloc(size);
//         return p;
//     }
//     void operator delete(void *p)
//     {
//         std::cout << "overloading delete operator" << std::endl;
//         free(p);
//     }
// };
// int main()
// {
//     Student *p = new Student("Yash", 28);
//     p->display();
//     delete p;
// }

#include <iostream>
class counter
{
private:
    unsigned int count;

public:
    counter() : count(0) {} // constructor
    unsigned int getCount()
    {
        return count;
    }
    counter operator++()//increment prefix & having return type of class
    {
        ++count;//increment count
        counter temp;//make a temporary counter
        temp.count = count;//give it same value as this obj
        return temp;
    }
};
int main()
{
    counter c1, c2;
    ++c1;
    c2 = ++c1;
    
    std::cout << "\nC1 = " << c1.getCount();
    std::cout << "\nC2 = " << c2.getCount();
    // ++c1;//increment count c1
    // ++c2;//increment count c2
    // ++c2;
    // std::cout << "\nC1 = " << c1.getCount();
    // std::cout << "\nC2 = " << c2.getCount();
}