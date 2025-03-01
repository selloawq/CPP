//Prime checker

#include <iostream>

bool primeChecker(int num);

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    if(num > 1)
    {
        if(primeChecker(num))
        {
            std::cout << num << " is a Prime Number!";
        }
        else
        {
            std::cout << num << " is not a Prime Number";
        }
    }
    else
    {
        std::cout << "1 is not a prime number!";
    }
    

}

bool primeChecker(int num)
{
    bool isPrime = 1;

    for(int i = 2; i < num; i++) //loop must start at i > 1; because every number is divisible by 1
    {
        if(num % i == 0)
        {
            isPrime = 0;
            return 0;
        }
    }

    return isPrime;

}