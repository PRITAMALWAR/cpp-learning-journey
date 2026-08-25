
// count zeros




// #include <iostream>

// int main()
// {
//     int numbers[6] = {0, 5, 0, 10, 20, 0};

//     int count = 0;

//     for (int i = 0; i < 6; i++)
//     {
//         if (numbers[i] == 0)
//         {
//             count++;
//         }
//     }

//     std::cout << "Zeros: " << count;

//     return 0;
// }







// Find First Occurrence


#include <iostream>

int firstOccurrence(int numbers[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numbers[5] = {10, 20, 30, 20, 40};

    int index = firstOccurrence(numbers, 5, 20);

    std::cout << "Index: " << index;

    return 0;
}