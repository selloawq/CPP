#include <iostream>

bool checkNumber(int num)
{
    return num > 0;
}

int main()
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    if(checkNumber(num))
    {
        std::cout << "true";

    }
    else
    {
        std::cout << "false";
    }

    return 0;
}