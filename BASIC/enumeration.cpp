#include <iostream>
using namespace std;
enum meal{Brekfast , Lunch , Dinner};

int main(){
    meal m1, m2, m3;
    m1 = Brekfast;
    m2 = Lunch;
    m3 = Dinner;
    if (m1 == 0)
    cout <<"Breakfasr"<<endl;
    if(m2 == 0)
    cout<<"Lunch"<<endl;
    if(m3 == 0)
    cout << "Dinner"<<endl;
    return 0;
}