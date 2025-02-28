#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    int result;

    std::cout << "Enter x: ";
    std::cin >> x;
    while(!(std::cin >> x))
    {
        std::cout << "Invalid input!";
        std::cin.clear();
        //return 0;
        std::cin.ignore(1000, '\n');
    }

    std::cout << "Enter y: ";
    std::cin >> y;
    while (!(std::cin >> y))
    {
        std::cout << "Invalid input: ";
        std::cin.clear();
        //return 0;
        std::cin.ignore(1000, '\n');
    }

    result = add(x,y);

    std::cout << result;
}