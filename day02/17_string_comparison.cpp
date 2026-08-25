// Compare two strings

#include <iostream>
#include <string>

int main()
{
    std::string first = "Hello";
    std::string second = "Hello";

    if (first == second)
    {
        std::cout << "Same";
    }
    else
    {
        std::cout << "Different";
    }

    return 0;
}





// Password example

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string password;
//     std::string correctPassword = "cpp123";

//     std::cout << "Enter password: ";
//     std::cin >> password;

//     if (password == correctPassword)
//     {
//         std::cout << "Correct password";
//     }
//     else
//     {
//         std::cout << "Wrong password";
//     }

//     return 0;
// }