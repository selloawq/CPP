#include <iostream>

int main()
{

    using std::cout;
    int var1 = 1;
    int var2 = 2;
    int temp;

    cout << "Before: \n" << " Var #1: " << var1 << " Var 2: "<< var2;

    temp = var2;
    var2 = var1;
    var1 = temp;

    cout << "\nAfter: \n" << "  Var #1: " << var1 << " Var #2: " << var2;

    return 0;

}