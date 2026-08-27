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



// what is Reference
// ans = A reference is another name/alias for an existing variable.

#include <iostream>

int main()
{
    int number = 10;

    int& ref = number;

    std::cout << number << std::endl;
    std::cout << ref;

    return 0;
}