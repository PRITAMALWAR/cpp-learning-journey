#include <iostream>

int main()
{
    int number = 10;

    int& ref = number;

    std::cout << number << std::endl;
    std::cout << ref;

    return 0;
}




// Change through reference

// #include <iostream>

// int main()
// {
//     int number = 10;

//     int& ref = number;

//     ref = 50;

//     std::cout << number;

//     return 0;
// }



// Reference with functions


// #include <iostream>

// void change(int number)
// {
//     number = 100;
// }

// int main()
// {
//     int number = 10;

//     change(number);

//     std::cout << number;

//     return 0;
// }




// Function with reference


// #include <iostream>

// void change(int& number)
// {
//     number = 100;
// }

// int main()
// {
//     int number = 10;

//     change(number);

//     std::cout << number;

//     return 0;
// }



// Compare pointer and reference

// void change(int* number)
// {
//     *number = 100;
// }

// int main()
// {
//     int value = 10;

//     change(&value);
// }





// Reference swap

// #include <iostream>

// void swapNumbers(int& a, int& b)
// {
//     int temp = a;

//     a = b;

//     b = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;

//     swapNumbers(a, b);

//     std::cout << "a: " << a << std::endl;
//     std::cout << "b: " << b;

//     return 0;
// }