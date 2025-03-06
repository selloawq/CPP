#include <iostream>

int main()
{
    char current_c = 'C';
    std::cout << "Enter character: ";
    std::cin >> current_c;

    for(char buffer = 'A'; buffer < 'Z'; buffer++)
    {
        if(current_c == buffer)
        {
            current_c = buffer + 1;
            std::cout << current_c;
            return 0;
        }
        
    }


}