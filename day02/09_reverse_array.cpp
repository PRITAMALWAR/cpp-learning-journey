// reverse program = Swap the first element with the last,
//  second with second-last, and continue toward the middle.

#include <iostream>
#include <utility>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5 / 2; i++)
    {
        std::swap(numbers[i], numbers[4 - i]);
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}