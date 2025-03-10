#include <iostream>
#include <cstring>

int main()
{
    int num;
    int count = 0;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::string test_1 = std::to_string(num);
    std::string buffer;
     
    while(buffer.length() < test_1.length())
    {
        buffer += "x";
        count++;
    }

    std::cout << "Number of digits: " << count << std::endl;
}