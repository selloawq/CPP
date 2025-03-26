#include <iostream>

int counter(int count)
{
    if(count >= 100) //✅Stop case
    {
        return count;
    }

    return counter(count + 1);
}

int main()
{
    int count = 0;
    int num = counter(count);

    std::cout << num;
}