

// new allows us to create data in memory dynamically while the program is running.

#include <iostream>

int main()
{
    int number = 10;

    std::cout << number;

    return 0;
}



// Dynamic memory and functions


// #include <iostream>

// void change(int* ptr)
// {
//     *ptr = 100;
// }

// int main()
// {
//     int* number = new int(10);

//     change(number);

//     std::cout << *number;

//     return 0;
// }