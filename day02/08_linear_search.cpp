//Linear Search =  One by one, from beginning to end.


// First Linear Search

#include <iostream>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int target = 40;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            std::cout << "Found at index: " << i;

            break;
        }
    }

    return 0;
}