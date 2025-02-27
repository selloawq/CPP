#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    int count = 6;

    for(int i = 0; i < 6; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            cout << "&";
        }
        cout << endl;
        
    }

    return 0;
}