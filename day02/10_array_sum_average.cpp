#include <iostream>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    std::cout << "Sum: " << sum;

    return 0;
}




























// #include <iostream>

// int main()
// {
//     int numbers[5];
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << "Enter number " << i + 1 << ": ";
//         std::cin >> numbers[i];

//         sum += numbers[i];
//     }

//     double average = sum / 5.0;

//     std::cout << "Sum: " << sum << std::endl;
//     std::cout << "Average: " << average;

//     return 0;
// }