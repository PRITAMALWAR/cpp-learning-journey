// Pointers with Functions :A pointer can allow a function to modify the original variable.


#include <iostream>

void change(int number)
{
    number = 100;
}

int main()
{
    int number = 10;

    change(number);

    std::cout << number;

    return 0;
}





// Use a pointer


// #include <iostream>

// void change(int* ptr)
// {
//     *ptr = 100;
// }

// int main()
// {
//     int number = 10;

//     change(&number);

//     std::cout << number;

//     return 0;
// }


