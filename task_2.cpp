#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::string numbers[]= {"zero", "one", "two", "three", "four", "five"};

    if(num < 6 && num > -1)
    {
        std::cout << "Number = " << numbers[num];
    }
    else
    {
        std::cout << "Invalid Number!!!";
    }
}