// pointers + new + arrays.
// A dynamic array is an array whose size is decided while the program is running.

// #include <iostream>

// int main()
// {
//     int* numbers = new int[5];

//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 40;
//     numbers[4] = 50;

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << numbers[i] << " ";
//     }

//     delete[] numbers;
//     numbers = nullptr;

//     return 0;
// }



// Size from user

// #include <iostream>

// int main()
// {
//     int size;

//     std::cout << "Enter size: ";
//     std::cin >> size;

//     int* numbers = new int[size];

//     for (int i = 0; i < size; i++)
//     {
//         std::cin >> numbers[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << numbers[i] << " ";
//     }

//     delete[] numbers;
//     numbers = nullptr;

//     return 0;
// }






// Initialize dynamic array

// #include <iostream>

// int main()
// {
//     int* numbers = new int[5]{};

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << numbers[i] << " ";
//     }

//     delete[] numbers;

//     return 0;
// }



// Dynamic array + sum


// #include <iostream>

// int main()
// {
//     int size;

//     std::cin >> size;

//     int* numbers = new int[size];

//     for (int i = 0; i < size; i++)
//     {
//         std::cin >> numbers[i];
//     }

//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         sum += numbers[i];
//     }

//     std::cout << "Sum: " << sum;

//     delete[] numbers;
//     numbers = nullptr;

//     return 0;
// }




// Dynamic array + maximum

// #include <iostream>

// int main()
// {
//     int size;

//     std::cin >> size;

//     int* numbers = new int[size];

//     for (int i = 0; i < size; i++)
//     {
//         std::cin >> numbers[i];
//     }

//     int maximum = numbers[0];

//     for (int i = 1; i < size; i++)
//     {
//         if (numbers[i] > maximum)
//         {
//             maximum = numbers[i];
//         }
//     }

//     std::cout << "Maximum: " << maximum;

//     delete[] numbers;
//     numbers = nullptr;

//     return 0;
// }