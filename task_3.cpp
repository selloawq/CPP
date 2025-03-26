#include <iostream>

void set_number(int &num_1, int &num_2)
{
    if( num_1 == num_2)
    {
        std::cout << "Numbers are EQUAL!!!";
    }
    else if(num_1 < num_2)
    {
        num_1 = -1;
    }
    else
    {
        num_2 = -1;
    }
}

int main()
{
    int num_1, num_2;

    std::cout << "Enter #1: ";
    std::cin >> num_1;
    std::cout << "Enter #2: ";
    std::cin >> num_2;

    set_number(num_1, num_2);

    std::cout << "#1 = " << num_1;
    std::cout << "\n#2 = " << num_2;


}