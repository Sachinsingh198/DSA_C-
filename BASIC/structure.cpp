#include <iostream>
#include <iomanip>
using namespace std;
struct car{
    string brand;
    string model;
    int year;
};

int main(){
    car c1;
    c1.brand = "BMW";
    c1.model = "XS";
    c1.year = 2023;
    car c2;
    c2.brand = "Ford";
    c2.model = "Mustany";
    c2.year = 2024;

    cout << c1.brand << setw(10) << c1.model << setw(10) << c1.year <<"\n";
    cout << c2.brand << setw(10) << c2.model << setw(10) << c2.year <<"\n";
    return 0;
}