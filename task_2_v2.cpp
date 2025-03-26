//Using containers

#include <iostream>
#include <map>


std::string digital_text(int num)
{
    std::map <int, std::string> output {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}};
    if(output.count(num))
    {
        std::cout << "Number = ";
        return output[num];
    }

    return "Invalid number!!!";
}

int main()
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << digital_text(num);
}