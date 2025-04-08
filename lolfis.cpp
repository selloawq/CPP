#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("test_case.txt");
    file << "Hello, world!";
}