#include <iostream>

int main()
{
    int age;
    int marks;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter marks: ";
    std::cin >> marks;

    if (age >= 18 && marks >= 40)
    {
        std::cout << "Eligible";
    }
    else
    {
        std::cout << "Not eligible";
    }

    return 0;
}