#include <iostream>
#include <fstream>
#include <memory>

/*
int main()
{
    int a  =10;
    int *ptr = &a;

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value at of a through pointer: " << *ptr <<std::endl;
}
*/

/*
int main()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    

    std::cout << "Address of myPointer: " << &ptr;
}
*/


/*
int main()
{

    //A shared_ptr allows multiple owners of the same piece of memory. 
    //The memory is automatically freed when the last shared_ptr pointing to it goes out of scope.
    std::shared_ptr<int> ptr_1 = std::make_shared<int>(10);
    std::shared_ptr<int> ptr_2 = ptr_1;

    std::cout << "Pointer 1 address: " << &ptr_1 << std::endl;
    std::cout << "Pointer 2 address: " << &ptr_2 << std::endl;

    //
    
    std::cout << "Reference count: " << ptr_1.use_count();
}
*/


int main()
{
    //auto myOttoPtr = std::make_unique<int>(10);

    auto ptr_1 = std::make_shared<int>(10);
    auto ptr_2 = ptr_1;
    std::cout << "Address of ptr_1: " << &ptr_1<< std::endl;
    std::cout << "Value of ptr_1: " << *ptr_1 << std::endl;
    std::cout << "Address of ptr_2: " << &ptr_2 << std::endl;
    std::cout << "Value of ptr_2: " << *ptr_2 << std::endl;
}