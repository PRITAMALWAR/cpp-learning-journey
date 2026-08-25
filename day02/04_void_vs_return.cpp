#include <iostream>

void sayHello()
{
    std::cout << "Hello C++!" << std::endl;
}

int main()
{
    sayHello();

    return 0;
}















// Returning function


// #include <iostream>

// int add(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int result = add(10, 20);

//     std::cout << result;

//     return 0;
// }













// Complete example

#include <iostream>
#include <string>

void printStudent(std::string name)
{
    std::cout << "Student: " << name << std::endl;
}

int totalMarks(int math, int cpp, int db)
{
    return math + cpp + db;
}

int main()
{
    printStudent("Rahul");

    int total = totalMarks(80, 90, 70);

    std::cout << "Total: " << total << std::endl;

    return 0;
}