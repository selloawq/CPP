#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::string the_number = std::to_string(num);

    for(int i = the_number.length() - 1; i > -1; i--)
    {
        std::cout << the_number[i];
    }
}