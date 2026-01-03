// #include <iostream>
// class Complex
// {
//     int a, b;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     // Below line means that non member- sumComplex function is allowed to do anythinf with my private parts.
//     friend Complex sumComplex(Complex o1, Complex o2);
//     void printNumber()
//     {
//         std::cout << "Your number is : " << a << " + " << b << "i" << std::endl;
//     }
// };
// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b, o2.b));
// }
// int main()
// {
//     Complex c1, c2;
//     c1.setNumber(1, 4);
//     c2.setNumber(5, 8);
//     c1.printNumber();
//     c2.printNumber();

//     return 0;
// }

// /*Prperties of friend functions
// 1.Not in the scope of the class.
// 2.Since it is not int the scope of the class , it cannot be called from th object of that class.c1.sumComplex()= is invalid.
// 3. Can be invoked without the help of any object.
// 4.Usually contains the objects as argument
// 5. Can be declared incide public or private section of the class
// 6. It cannot access the menbers directly by their names and need object_name.member_name to access any member

// */



//Simple Example
// #include <iostream>
// class y;
// class x{
//     int data;
//     public:
//     void setValue(int value){
//         data = value;
//     }
//     friend void add(x,y);
// };

// class y {
//     int num;
//     public:
//     void setValue(int value){
//         num = value;
//     }
//     friend void add(x,y);
// };

// void add(x o1, y o2){
//     std::cout<<"Summing Data of X and Y objects gives me : "<<o1.data + o2.num<<std::endl;
// }
// int main(){
//     x a1;
//     a1.setValue(3);
//     y b1;
//     b1.setValue(3);
    
//     add(a1,b1);
//     return 0;
// }


//Complex example(Swapping of objects of two classes by reference)
#include <iostream>
class c2;
class c1{
    int val;
    friend void Exchange( c1 &, c2 &);
    public:
    void indata(int a){
        val = a;
    }
    void display(void){
        std::cout<<val<<std::endl;
    }
};

class c2{
    int val2;
    friend void Exchange(c1 &, c2 &);
    public:
    void indata(int a){
        val2 = a;
    }
    void display(void){
        std::cout<<val2<<std::endl;
    }
};

void Exchange(c1 &x, c2 &y){
    std::swap(x.val, y.val2);
}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(54);
    oc2.indata(67);
    Exchange(oc1, oc2);
    std::cout<<"Value after swapping becomes : ";
    oc1.display();
    std::cout<<"Value after swapping becomes : ";
    oc2.display();  
    return 0;
}