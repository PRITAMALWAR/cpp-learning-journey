// Array traversal means visiting each element of an array one by one.


#include <iostream>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}















// #include <iostream>

// int main()
// {
//     int numbers[5];

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << "Enter number " << i + 1 << ": ";
//         std::cin >> numbers[i];
//     }

//     std::cout << "Array elements:" << std::endl;

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << numbers[i] << " ";
//     }

//     return 0;
// }




// Find the Maximum

// #include <iostream>

// int main()
// {
//     int numbers[5] = {10, 40, 20, 90, 50};

//     int maximum = numbers[0];

//     for (int i = 1; i < 5; i++)
//     {
//         if (numbers[i] > maximum)
//         {
//             maximum = numbers[i];
//         }
//     }

//     std::cout << "Maximum: " << maximum;

//     return 0;
// }










// sum


// #include <iostream>

// int main()
// {
//     int numbers[5] = {10, 20, 30, 40, 50};

//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + numbers[i];
//     }

//     std::cout << "Sum: " << sum;

//     return 0;
// }