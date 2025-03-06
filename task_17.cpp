#include <iostream>

int main()
{
    int num1, num2, num3;
    int max = 0;


    std::cout << "Enter #1: ";
    std::cin >> num1;
    std::cout << "Enter #2: ";
    std::cin >> num2;
    std::cout << "Enter #3: ";
    std::cin >> num3;

    if(num1 > num2 && num1 > num3)
    {
        std::cout << num1 << " is the largest!";
    }
    else if(num2 > num1 && num2 > num3)
    {
        std::cout << num2 << " is the largest!";
    }
    else
    {
        std::cout << num3 << " is the largest!";
    }
}