#include <iostream>
#include <vector>

int main()
{
    int size;
    std::cout << "Enter vector size: ";
    std::cin >> size;

    std::vector<int> nums;

    for(int i = 0; i < size; i++)
    {
        nums.push_back(i * 5);
    }

    for(int j = 0; j < size; j++)
    {
        std::cout << nums[j] << " ";
    }
}