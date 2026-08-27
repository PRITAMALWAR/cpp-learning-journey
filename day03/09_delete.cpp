#include <iostream>

int main()
{
    int* ptr = new int(10);

    std::cout << *ptr << std::endl;

    delete ptr;

    return 0;
}


// new
//  ↓
// memory allocated
//  ↓
// program forgets memory
//  ↓
// memory remains allocated unnecessarily




// Set pointer to nullptr
// A good habit after deleting


// #include <iostream>

// int main()
// {
//     int* ptr = new int(10);

//     std::cout << *ptr << std::endl;

//     delete ptr;
//     ptr = nullptr;

//     return 0;
// }


// Check for nullptr


// #include <iostream>

// int main()
// {
//     int* ptr = new int(10);

//     delete ptr;
//     ptr = nullptr;

//     if (ptr == nullptr)
//     {
//         std::cout << "Pointer is empty";
//     }

//     return 0;
// }



// Example with a function

// #include <iostream>

// void change(int* ptr)
// {
//     *ptr = 100;
// }

// int main()
// {
//     int* number = new int(10);

//     change(number);

//     std::cout << *number << std::endl;

//     delete number;
//     number = nullptr;

//     return 0;
// }