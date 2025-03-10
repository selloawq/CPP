#include <iostream>
#include <math.h>



void printPrimes(int num);

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    if(num > 1)
    {
        printPrimes(num);
    }
    else if(num <= 1)
    {
        std::cout << "Invalid input! Number cannot be checked!";
    }
}

void printPrimes(int num)
{
    
    for(int i = 2; i < num; i++)
    {
        bool isPrime = true;
       for(int j = 2; j < sqrt(i); j++)
       //this loop checks the current value of i against its predecessors
       {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
       }

       if(isPrime)
       //if i is a prime we then print in outer loop
       {
            std::cout << i << " ";
       }

      // std::cout << std::endl;
    }
}