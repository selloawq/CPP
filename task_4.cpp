#include <iostream>

int calculator(char choice, int num_1, int num_2)
{
    switch (choice)
    {
    case '+':
        return num_1 + num_2;
        break;
    
    case '-':
        return num_1 - num_2;
        break;
    
    case '*':
        return num_1 * num_2;
        break;

    case '/':
        return num_1 / num_2;
        break;
    
    default:
        return 1;
        break;
    }
}

int main()
{
    std::cout << "What would you like to do: ";
    std::cout << "Addition(+)";
    std::cout << "Subtraction(-)";
    std::cout << "Multiplication(*)";
    std::cout << "Division(/)";

    char choice;
    std::cin >> choice;

    int num_1, num_2;
    std::cout << "Enter #1: ";
    std::cin >> num_1;
    std::cout << "Enter #2: ";
    std::cin >> num_2;

    std::cout << "Answer: " << calculator(choice, num_1, num_2);

}