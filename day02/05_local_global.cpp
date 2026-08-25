// Local variable = A variable created inside a function or block is called a local variable.



#include <iostream>

void test()
{
    int x = 10;

    std::cout << x;
}

int main()
{
    test();

    return 0;
}



// Global variable = A variable created outside all functions is called a global variable.

// #include <iostream>

// int x = 10;

// void test()
// {
//     std::cout << x;
// }

// int main()
// {
//     std::cout << x << std::endl;

//     test();

//     return 0;
// }