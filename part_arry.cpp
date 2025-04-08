#include <iostream>
#include <vector>


void part_arr(std::vector<int>& arr)
{
    int count = 0;
    std::vector<int> temp_arr(arr.size());
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0)
        {

            temp_arr[count] = arr[i];
            count += 1;
        }
    }
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 != 0)
        {

            temp_arr[count] = arr[i];
            count += 1;
        }
    }


    for(int j = 0; j < arr.size(); j++)
    {
        std::cout << temp_arr[j] << " ";
    }

}

int main()
{
    std::vector<int> arr = {3, 8, 15, 22, 7, 4, 11, 16, 9, 10};
    part_arr(arr);
}