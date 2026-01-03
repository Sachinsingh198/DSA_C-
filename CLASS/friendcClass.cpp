#include <iostream>
class Complex; // Forward declaration
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumcompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // //individually declaring functions as friends
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumcompComplex(Complex o1, Complex o2);

    //Alter: Declaring the entire calculator class as a friend class
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member- sumComplex function is allowed to do anythinf with my private parts.

};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumcompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    std::cout << "The sum of real oart of o1 and o2 is : " << res << std::endl;
    res = calc.sumcompComplex(o1, o2);
    std::cout << "The sum of imaginary oart of o1 and o2 is : " << res << std::endl;
    return 0;
}
