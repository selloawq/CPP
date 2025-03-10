#include <iostream>

int main()
{
    int size, newSize;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    double *arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter #" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Old array: ";
    for(int j = 0; j < size; j++)
    {
        std::cout << arr[j] << " ";
    }

    std::cout << "Enter new size of array: ";
    std::cin >> newSize;

    if(newSize > 0)
    {
        double *nArr = new double[newSize];

        for(int k = 0; std::min(size, newSize); k++)
        {
            nArr[k] = arr[k];
        }

        delete[] arr;
        arr = nArr;
        size = newSize;

        std::cout << "New array: ";
        for(int j = 0; j < size; j++)
        {
            std::cout << arr[j] << " ";
        }

        delete[] arr;
    }
    else
    {
        std::cout << "Invalid new size! Keeping old array.\n";
        delete[] arr;
    }

    return 0;
}