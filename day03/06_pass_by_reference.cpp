// Pass by Value


#include <iostream>

void change(int number)
{
    number = 100;
}

int main()
{
    int number = 10;

    change(number);

    std::cout << number;

    return 0;
}



// Pass by Reference

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




// Practical example: Increment
// Pass by value


// #include <iostream>

// void increment(int number)
// {
//     number++;
// }

// int main()
// {
//     int number = 10;

//     increment(number);

//     std::cout << number;

//     return 0;
// }
// output = 10 //The original doesn't change.





// Pass by reference

// #include <iostream>

// void increment(int& number)
// {
//     number++;
// }

// int main()
// {
//     int number = 10;

//     increment(number);

//     std::cout << number;

//     return 0;
// }



// Pass by reference with two variables

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




// Mini Challenge


// #include <iostream>

// void update(int& a, int& b)
// {
//     a = a + 10;
//     b = b + 20;
// }

// int main()
// {
//     int x = 5;
//     int y = 10;

//     update(x, y);

//     std::cout << x << std::endl;
//     std::cout << y;

//     return 0;
// }