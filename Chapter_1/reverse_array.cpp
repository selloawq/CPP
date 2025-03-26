#include <iostream>

void print_array(int *buffer);
void reverse_array(int *n_list);

void fill_array(int *n_list)
{
    for(int i = 0; i < 12; i++)
    {
        std::cout << "Enter #" << i + 1 << ": ";
        std::cin >> n_list[i];
    }

    reverse_array(n_list);
}

void reverse_array(int *n_list)
{
    int* buffer = new int[12];
    for(int i = 0; i < 12; i++)
    {
        buffer[11 - i] = n_list[i];
    }

    print_array(buffer);
    
    delete[] buffer;
    buffer = nullptr;
}

void print_array(int *buffer)
{
    for(int i = 0; i < 12; i++)
    {
        std::cout << buffer[i] << " ";
    }


}

int main()
{
    int* n_list = new int[12];
    fill_array(n_list);

    delete[] n_list;
    n_list = nullptr;

}