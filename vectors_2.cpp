#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    int size = 10;

    std::vector<int> nums(size);
    std::iota(nums.begin(), nums.end(), 10);

    for(int i = 0; i < size; i++)
    {
        std::cout << nums[i] << " ";
    }

    std::reverse(nums.begin(), nums.end());
    std::cout << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << nums[i] << " ";
    }

    std::cout << std::endl;
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < size; i++)
    {
        std::cout << nums[i] << " ";
    }

    
}