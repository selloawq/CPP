#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    if(a > b)
    {
        std::cout << "a is greater than b";
    }
    else
    {
        std::cout << "b is greater than a";
    }

    return 0;
}