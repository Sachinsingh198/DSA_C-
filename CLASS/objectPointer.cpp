// #include <iostream>

// class Cricketer
// {
// public:
//     std::string name;
//     int runs;
//     float avg;
//     Cricketer(std::string name, int runs, float avg)
//     {
//         // name = name;//This give the garbage value for the runs as well as for the runs
//         // runs = runs;//To encounter with this problem we use "this->" keyword
//         this->name = name;
//         this->runs = runs;
//         this->avg = avg;
//     }
// };
// void change (Cricketer* c){
//         // (*c).avg = 77.2;//One more alternative way
//         c-> avg = 68.9;// c-> avg means (*c).avg
// }
// int main()
// {
//     Cricketer c1("Virat Kohli", 25000, 59.8);
//     std::cout<<c1.avg << std::endl;
//     change (&c1);

//     std::cout<<c1.avg << std::endl;
//     // Cricketer c2("Rohit Sharma", 20000, 50.2);
//     // Cricketer* p1 = &c1;
//     // std:: cout<<(*p1).runs<<std::endl;  //*p is always in brackets
//     // int x = 4;
//     // std::cout<<&x<<std::endl;
//     // int* p = &x;
//     // std::cout<<p<<std::endl;
//     // std::cout<<*p<<std::endl;
//     // *p = 100;//x = 100
//     // std::cout<<x<<std::endl;
//     return 0;
// }

// #include <iostream>
// int main(){
//     int a = 3;
//     int* b = &a;
//     std::cout<<"The value at address b is: "<<*b<<std::endl;
// }

// #include <iostream>
// namespace myName{
//     void getData(std::string& name){
//         std::cout<<"Enter your name: ";
//         std::cin>>name;
//     };
// };
// namespace yourName{
//     void getData(std::string& name,int marks){
//          std::cout<<"Enter your name: ";
//         std::cin>>name;
//     };
// };
// int main(){
//     std::string my;
//     myName::getData( my);
//     std::cout<<"My name is :"<<my<<std::endl;
//     std::string your;
//     yourName::getData( your,4);
//     std::cout<<"Your name is :"<<your<<std::endl;
// }

// #include <iostream>
// class Point{
//     int a,b;
//     public:
//     Point(int a, int b){
//         this-> a = a;
//         this-> b = b;
//     }
//     Point (const Point& p1){
//         a = p1.a;
//         b = p1.b;
//     }
//     int getX(void){
//         return a;
//     }
//     int getY(void){
//         return b;
//     }
// };
// int main(){
//     Point p1(3,4);
//     Point p2 = p1;;
//     std::cout<<"X of p1: "<<p1.getX()<<std::endl;
//     std::cout<<"Y of p1: "<<p1.getY()<<std::endl;
//     std::cout<<"X of p2: "<<p2.getX()<<std::endl;
//     std::cout<<"Y of p2: "<<p2.getY()<<std::endl;
//     return 0;
// }

// #include <iostream>
// int myfunc(int a ){
//     return a;
// }
// int myfunc(int a, int b){
//     return a + b;
// }
// int main(){
//     int(*fp)(int a);
//     fp = myfunc;
//     std::cout<<fp(4)<<std::endl;
//     int (*f)(int x,int y);
//     f = myfunc;
//     std::cout<<f(4,5)<<std::endl;
//     return 0;
// }



