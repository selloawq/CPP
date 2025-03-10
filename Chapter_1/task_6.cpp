#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if(number % 2 == 0)
    {
        std::cout << "Number is even";
    }
    else
    {
        std::cout << "Jou ma se...";
    }

    return 0;
}