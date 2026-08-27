// what is pointer

// ans = A pointer stores the address of another variable.

#include <iostream>

int main()
{
    int number = 10;

    int* ptr = &number;

    std::cout << "Value: " << *ptr << std::endl;
    std::cout << "Address: " << ptr;

    return 0;
}