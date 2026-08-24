#include <iostream>

int main()
{
    int i = 1;

    do
    {
        std::cout << i << std::endl;

        i++;
    }
    while (i <= 5);

    return 0;
}










// #include <iostream>

// int main()
// {
//     int number;

//     do
//     {
//         std::cout << "Enter a positive number: ";
//         std::cin >> number;
//     }
//     while (number <= 0);

//     std::cout << "You entered: " << number;

//     return 0;
// }