#include <iostream>

void recursiveFn(int num)
{
    if(num > 10)
    {
        std::cout << "Done";
    }
    else
    {
        num += 1;
        return recursiveFn(num);
    }
}

int main()
{
    int num = 0;
    recursiveFn(num);
}