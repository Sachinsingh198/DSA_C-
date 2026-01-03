#include <iostream>
class combination
{
public:
    combination()
    {

        int a;
        char c1, c2;
        std::cout << "Type 1 or 2: ";
        std::cin >> a;
        if (a == 1)
        {
            std::cout << "Type a, b or c : ";
            std::cin >> c1;
            if (c1 == 'a')
            {
                std::cout << a << std::endl;
            }
            else if (c1 == 'b')
            {
                std::cout << 'b' << std::endl;
            }
            else if (c1 == 'c')
            {
                std::cout << 'c' << std::endl;
            }
            else
            {
                std::cout << "Enter any valid value";
            }
        }

        else if (a == 2)
        {
            std::cout << "Type d, e or f : ";
            std::cin >> c2;
            if (c2 == 'd')
            {
                std::cout << 'd' << std::endl;
            }
            else if (c2 == 'e')
            {
                std::cout << 'e' << std::endl;
            }
            else if (c2 == 'f')
            {
                std::cout << 'f' << std::endl;
            }
            else
            {
                std::cout << "Enter any valid value";
            }
        }
    }
};
int main()
{
    combination c;
    return 0;
}