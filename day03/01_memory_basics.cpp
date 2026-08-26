#include <iostream>

int main()
{
    int age = 22;

    std::cout << age;

    return 0;
}






// Every variable has an address

// #include <iostream>

// int main()
// {
//     int age = 22;

//     std::cout << "Value: " << age << std::endl;
//     std::cout << "Address: " << &age;

//     return 0;
// }




//C++ also lets us find how much memory a type uses with: sizeof

#include <iostream>

int main()
{
    int age = 22;

    std::cout << sizeof(age);

    return 0;
}