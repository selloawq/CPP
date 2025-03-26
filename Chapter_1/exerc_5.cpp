#include <iostream>

int main()
{
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    int* arr_n = new int[size];
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter #" << i + 1 << ": ";
        std::cin >> arr_n[i];
    }

    while (count < size)
    {
        std::cout << arr_n[count] << ", ";
        count+=1;
    }

    std::cout << std::endl;


    int new_size;
    std::cout << "Enter new array size: ";
    std::cin >> new_size;
    int *arr_new = new int[new_size];

    //Initialize all elements to zero
    
    for(int l = 0; l < new_size; l++)
    {
        arr_new[l] = 0;
    }

    //Copy all values to new array

    for(int j = 0; j < size; j++)
    {
        arr_new[j] = arr_n[j];
    }


    //Delete old array
    delete[] arr_n;
    arr_n = nullptr;

    for(int k = 0; k < size; k++)
    {
        std::cout << arr_new[k] << ", ";
    }

    delete[] arr_new;
    arr_new = nullptr;

    

}