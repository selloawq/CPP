#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;  
    nums.push_back(10); // [10]
    nums.push_back(20); // [10,20]
    nums.push_back(30); // [10,20,30]

    //nums.pop_back(); //Removes last element [10,20]

    std::cout << "Size of vector: " << sizeof(nums) << std::endl;

    for(int i = 0; i < sizeof(nums) / 8; i++)
    {
        std::cout << nums[i] << " ";
    }
}