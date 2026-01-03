#include <iostream>
class distance
{
    int feet;
    float inches;

public:
    distance() : feet(0), inches(0.0) {}
    distance(int ft, float in) : feet(ft), inches(in) {}
    void getDist(void)
    {
        std::cout << "\nEnter feet: ";
        std::cin >> feet;
        std::cout << "\nEnter inches: ";
        std::cin >> inches;
    }
    void showDist(void)
    {
        std::cout << feet << "\'-" << inches << '\"';
    }
    distance operator+(distance) const;
};
distance distance ::operator+(distance d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i>=12){
        i = i - 12;
        f++;
    }
    return distance (f,i);
}
int main(){
    distance dist1,dist3,dist4;
    dist1.getDist();
    distance dist2(11,16.5);
    dist3 = dist1+ dist2;
    dist4 = dist1 + dist2+ dist3;
    std::cout<<"dist1 = ";dist1.showDist();std::cout<<std::endl;
    std::cout<<"dist2 = ";dist2.showDist();std::cout<<std::endl;
    std::cout<<"dist3 = ";dist3.showDist();std::cout<<std::endl;
    std::cout<<"dist4 = ";dist4.showDist();std::cout<<std::endl; 
}