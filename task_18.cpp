#include <iostream>

int main()
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    if(num % 2 == 0)
    {
        std::cout << "Number is even!";
    }
    else
    {
        std::cout << "Number is odd!";
    }
}