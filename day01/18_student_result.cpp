#include <iostream>
#include <string>

int main()
{
    std::string name;
    int math;
    int programming;
    int database;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter Math marks: ";
    std::cin >> math;

    std::cout << "Enter Programming marks: ";
    std::cin >> programming;

    std::cout << "Enter Database marks: ";
    std::cin >> database;

    int total = math + programming + database;
    double average = total / 3.0;

    std::cout << "\n--- Student Result ---" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Average: " << average << std::endl;

    if (math < 40 || programming < 40 || database < 40)
    {
        std::cout << "Result: Fail" << std::endl;
    }
    else
    {
        std::cout << "Result: Pass" << std::endl;

        if (average >= 90)
        {
            std::cout << "Grade: A" << std::endl;
        }
        else if (average >= 75)
        {
            std::cout << "Grade: B" << std::endl;
        }
        else if (average >= 60)
        {
            std::cout << "Grade: C" << std::endl;
        }
        else
        {
            std::cout << "Grade: D" << std::endl;
        }
    }

    return 0;
}