//Dynamic memory management

#include <iostream>

int main()
{
    int *ptr = new int;
    *ptr = 10;

    std::cout << "Value:" << *ptr << std::endl;
    std::cout << "Value:" << ptr << std::endl;

    delete ptr;
    ptr = nullptr;
}