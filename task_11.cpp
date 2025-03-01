//Even number checker
#include <iostream>

bool evenChecker(int num);

int main()
{
    int num;
    std::cout << "Enter number to check: ";
    std::cin >> num;

    if(evenChecker(num))
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }

    return 0;

    
}

bool evenChecker(int num)
{
    return num % 2 == 0;
}