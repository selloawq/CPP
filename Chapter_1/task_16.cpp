#include <iostream>

int main()
{
    float length;
    float height;
    float perimeter, area;
    const float TWO = 2.0;

    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter height: ";
    std::cin >> height;

    perimeter = (length + height) * TWO;
    area = length * height;

    std::cout << "Perimeter: "<< perimeter;
    std::cout << "Area: "<< area;

    return 0;
}