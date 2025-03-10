//Dynamic Memory Management Continued

#include <iostream>

int main()
{
    int size;
    double sum = 0;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    if(size <= 0)
    {
        std::cout << "Error! Size of array must be > 0!";
        return 1;
    }

    double *arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter #" << i << ": ";
        std::cin >> arr[i];
        sum += arr[i]; 
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << '\n' << "Sum: " << sum << std::endl;

    delete[] arr;
    arr = nullptr;
    return 0;
}