#include <iostream>

int main()
{
    int N;
    int count = 1;
    std::cout << "Enter N: ";
    std::cin >> N;


    do
    {
        if(count % 2 == 0)
        {
            std::cout << count<< " ";
        }
        count++;
    } while (count < N);
    
}