#include <iostream>

int main()
{
    int marks;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks >= 90)
    {
        std::cout << "Excellent";
    }
    else if (marks >= 75)
    {
        std::cout << "Very Good";
    }
    else if (marks >= 60)
    {
        std::cout << "Good";
    }
    else if (marks >= 40)
    {
        std::cout << "Pass";
    }
    else
    {
        std::cout << "Fail";
    }

    return 0;
}