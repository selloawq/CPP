//Memory Management Continued
#include <iostream>


int main()
{
    int size, newSize;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    double *arr = new double[size];
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Etner #" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Old array: ";
    for(int j = 0; j < size; j++)
    {
        std::cout << arr[j] << " ";
    }

    std::cout << "\n\nEnter new size of array: ";
    std::cin >> newSize;

    double *nArr = new double[newSize];

    for(int k = 0; k < size; k++)
    {
        nArr[k] = arr[k];
    }

    std::cout << "New array: ";
    for(int j = 0; j < size; j++)
    {
        std::cout << nArr[j] << " ";
    }


}

