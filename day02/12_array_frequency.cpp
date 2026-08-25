// Basic frequency counting


#include <iostream>

int main()
{
    int numbers[6] = {5, 2, 5, 7, 5, 2};

    int target = 5;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == target)
        {
            count++;
        }
    }

    std::cout << "Frequency: " << count;

    return 0;
}





















// count the Even Number



// #include <iostream>

// int main()
// {
//     int numbers[6] = {5, 2, 8, 7, 10, 3};

//     int count = 0;

//     for (int i = 0; i < 6; i++)
//     {
//         if (numbers[i] % 2 == 0)
//         {
//             count++;
//         }
//     }

//     std::cout << "Even numbers: " << count;

//     return 0;
// }
