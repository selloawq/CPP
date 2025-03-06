#include <iostream>

int main()
{
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;
    int count = 1, sum = 0;

    for(int i = 0; i <= N; i++)
    {
        sum += i;

    }

    std::cout << "Sum: "<<sum;
}