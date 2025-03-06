#include <iostream>

int main()
{
    float celcius;
    float fahr = 0.0;
    const float FRACT = 1.8;

    std::cout << "Enter Celcius Temp:";
    std::cin >> celcius;

    fahr = celcius * FRACT + 32.0;
    std::cout << "\nFahrenheit: " << fahr;

    return 0;


}