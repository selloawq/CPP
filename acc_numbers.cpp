#include <iostream>
#include <string>

struct Account
{
    std::string name;
    int number;
    double balance;
};

void check_account( struct Account p1[], int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(p1[i].balance < 500)
        {
            arr[i] = p1[i].number;
        }
        else if(p1[i].balance >= 500)
        {
            arr[i] = -1;
        }
    }

    for(int j = 0; j < size; j++)
    {
        std::cout << arr[j] << "; ";
    }
}

int main()
{
    int init_values[3] = {0};
    Account accounts[3] = {{"John" ,578328,890.000000 },{"Alex" ,908210,430.200000 },{"Kim" ,165216,98.500000 }};
    check_account(accounts, init_values, 3);

}