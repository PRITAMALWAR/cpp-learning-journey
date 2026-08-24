// #include <iostream>

// int main()
// {
//     int age = 20;

//     if (age >= 18)
//     {
//         std::cout << "You are an adult.";
//     }

//     return 0;
// }



















#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Positive";
    }
    else
    {
        std::cout << "Zero or negative";
    }

    return 0;
}