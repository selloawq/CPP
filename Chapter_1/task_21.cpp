#include <iostream>

int main()
{
    int N;
    std::cout << "Enter N:";
    std::cin >> N;

    for(int i = N; i > 0; i--)
    {
        std::cout << i << " ";
    }

    return 0;
}