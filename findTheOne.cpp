#include <iostream>

int findTheOne(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result ^= arr[i]; // XOR cancels out duplicates
    }
    return result;
}

int main()
{
    int arr[16] = {1, 1, 3, 3, 4, 4, 6, 6, 8, 8, 9, 9, 11, 11, 13, 15};
    int unique = findTheOne(arr, 16);
    std::cout << "The unique number is: " << unique << std::endl;
    return 0;
}
