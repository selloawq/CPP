#include <iostream>

int main()
{
    float seconds;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;
    float minutes = seconds / 60;
    float temp = seconds / 60;
    float hours = minutes / 60;

    std::cout << "\nSeconds: " << seconds;
    std::cout << "\nMinutes: " << minutes;
    std::cout << "\nHours: " << hours;
    std::cout << "\n";




}