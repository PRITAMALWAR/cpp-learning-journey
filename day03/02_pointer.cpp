//pointer: A pointer is a variable that stores the memory address of another variable.

// Create your first pointer


#include <iostream>

int main()
{
    int age = 22;

    int* ptr = &age;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Address: " << &age << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;

    return 0;
}











// Pointer and original variable

// #include <iostream>

// int main()
// {
//     int number = 10;

//     int* ptr = &number;

//     std::cout << "Before: " << number << std::endl;

//     *ptr = 50;

//     std::cout << "After: " << number;

//     return 0;
// }