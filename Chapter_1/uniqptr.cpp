#include <iostream>
#include <memory>


int main()
{
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    std::unique_ptr<int[]> arr_n = std::make_unique<int[]>(size);
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter #" << i + 1 << ": ";
        std::cin >> arr_n[i];
    }

    for(int j = 0; j < size; j++)
    {
        std::cout << arr_n[j] << " ";
    }

    std::cout << std::endl;

    int new_size;
    std::cout << "Enter new size for the array: ";
    std::cin >> new_size;

    std::unique_ptr<int[]> arr_new = std::make_unique<int[]>(new_size);
    for(int l = 0; l < new_size; l++)
    {
        arr_new[l] = 0;
    }

    for(int m = 0; m < size; m++)
    {
        arr_new[m] = arr_n[m];
    }

    int count = 0;
    while(count  < new_size)
    {
        std::cout << arr_new[count] << " ";
        count+=1;
    }

}