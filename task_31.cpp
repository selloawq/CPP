#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    int count = 1;
    
    for(int i = 1; i <= num; i++)
    {
        count *= i;
    }

    std::cout << "Factorial: " << count << std::endl;


}