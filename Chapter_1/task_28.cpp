#include <iostream>

void doubleSize(double*& arr, int& size)
{
    int newSize = size * 2;
    double *newArr = new double[newSize];

    for(int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }

    delete[] arr;
    newArr = arr;
    size = newSize;
}

int main()
{
    int size, count = 0;
    std::cout << "Enter array size: ";
    std::cin >> size;

    double *arr = new double[size];
    char choice;
    do
    {
        if(count == size)
        {
            std::cout << "Array is full! Resizing";
            doubleSize(arr, size);
        }

        std::cout << "Enter a number: ";
        std::cin >> arr[count++];

        std::cout << "Add another: (y/n)?";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    std::cout << "Final Array: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}