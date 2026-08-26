#include <iostream>

int main()
{
    int number = 10;

    int* ptr = &number;

    std::cout << *ptr;

    return 0;
}



// Modify through pointer

// #include <iostream>

// int main()
// {
//     int number = 10;

//     int* ptr = &number;

//     *ptr = 100;

//     std::cout << number;

//     return 0;
// }



// Change multiple times

// #include <iostream>

// int main()
// {
//     int number = 10;

//     int* ptr = &number;

//     *ptr = 20;
//     std::cout << number << std::endl;

//     *ptr = 50;
//     std::cout << number << std::endl;

//     *ptr = 100;
//     std::cout << number << std::endl;

//     return 0;
// }