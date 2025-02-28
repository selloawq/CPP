#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter a: ";
    std::cin >> a;
    while (!(std::cin >> a))
    {
        std::cout << "Invalid Input. Enter correct input: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');

    }

    std::cout << "Enter b: ";
    std::cin >> b;
    while (!(std::cin >> b))
    {
        std::cout << "Invalid Input! Enter correct input: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

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