#include <iostream>

class Cricketer
{
public:
    std::string name;
    int runs;
    float avg;
    Cricketer(std::string name, int runs, float avg)
    {
        // name = name;//This give the garbage value for the runs as well as for the runs
        // runs = runs;//To encounter with this problem we use "this->" keyword
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(int runs)
    {
        std::cout <<this-> name << "  " <<this-> runs << "  " <<this-> avg << std::endl;
        std::cout << "ODI Ranking: " << runs << std::endl;
    }
    int matches(){
        int matches = runs / avg;
        return matches;
    }
};
int main()
{
    Cricketer c1("Virat Kohli", 25000, 59.8);
    Cricketer c2("Rohit Sharma", 20000, 50.2);

    c1.print(1);
    c2.print(2);
    std::cout<<c1.matches() <<"  "<<std:: endl;
    std::cout<<c2.matches() <<"  "<<std:: endl;
    return 0;
}
