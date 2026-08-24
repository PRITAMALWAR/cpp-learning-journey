// int = int stores whole numbers.

// int age = 22;
// int marks = 85;
// int year = 2026;



// double = double stores decimal numbers.

// double percentage = 85.5;
// double price = 99.99;
// double height = 5.8;



// #include <iostream>

// int main()
// {
//     int age = 22;
//     double percentage = 85.5;

//     std::cout << "Age: " << age << std::endl;
//     std::cout << "Percentage: " << percentage << std::endl;

//     return 0;
// }



// char = char stores one character.

// char grade = 'A';

// std::cout << grade;



// bool = bool stores only two possible values


// #include <iostream>

// int main()
// {
//     bool isStudent = true;

//     std::cout << isStudent;

//     return 0;
// }


// string = stores text.

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string name = "Rahul";

//     std::cout << name;

//     return 0;
// }



// Put everything together
#include <iostream>
#include <string>

int main()
{
    int age = 22;

    double percentage = 85.5;

    char grade = 'A';

    bool isStudent = true;

    std::string name = "Rahul";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Percentage: " << percentage << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Student: " << isStudent << std::endl;

    return 0;
}