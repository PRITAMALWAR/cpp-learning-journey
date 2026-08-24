#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        std::cout << i << std::endl;
    }

    return 0;
}























// #include <iostream>

// int main()
// {
//     int number;

//     while (true)
//     {
//         std::cout << "Enter number (0 to stop): ";
//         std::cin >> number;

//         if (number == 0)
//         {
//             break;
//         }

//         std::cout << "You entered: " << number << std::endl;
//     }

//     std::cout << "Program stopped.";

//     return 0;
// }