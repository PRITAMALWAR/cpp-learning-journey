// Find Maximum

#include <iostream>

int main()
{
    int numbers[5] = {10, 50, 20, 80, 30};

    int maximum = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    std::cout << "Maximum: " << maximum;

    return 0;
}






// Find Minimum

// #include <iostream>

// int main()
// {
//     int numbers[5] = {10, 50, 20, 80, 30};

//     int minimum = numbers[0];

//     for (int i = 1; i < 5; i++)
//     {
//         if (numbers[i] < minimum)
//         {
//             minimum = numbers[i];
//         }
//     }

//     std::cout << "Minimum: " << minimum;

//     return 0;
// }