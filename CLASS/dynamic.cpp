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

// int main()
// {
//     Cricketer c1("Virat Kohli", 25000, 59.8);
//     // Cricketer c2("Rohit Sharma",18000,50.0);
//     Cricketer* c2 = new Cricketer("Rohit Sharma",18000,50.0);

//     // int* ptr = new int (543);//Store the adress of the variable without declaring any variable
//     // std::cout<<(*ptr);
//   std:: cout<<c1.name<<"  "<<c1.runs<<"  "<<std::endl;
//   std:: cout<<c2->name<<"  "<<c2->runs<<"  "<<std::endl;

//     return 0;
// }

// Memory allocation and using arrays in classes
#include <iostream>
class shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
    std::cout << "Enter Id of your item no.: " << counter + 1 << std::endl;
    std::cin >> itemId[counter];
    std::cout << "Enter Price of your item no.: " << counter + 1 << std::endl;
    std::cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        std::cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << std::endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    for(int i = 0; i < 4; i++){
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}