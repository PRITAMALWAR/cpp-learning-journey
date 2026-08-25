


#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Name: " << name;

    return 0;
}












// Input with cin

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string name;

//     std::cout << "Enter name: ";
//     std::cin >> name;

//     std::cout << "Name: " << name;

//     return 0;
// }




// Input with getline()

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string name;

//     std::cout << "Enter full name: ";
//     std::getline(std::cin, name);

//     std::cout << "Name: " << name;

//     return 0;
// }






// Count characters

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string word = "Hello";

//     int count = 0;

//     for (int i = 0; i < word.length(); i++)
//     {
//         count++;
//     }

//     std::cout << "Characters: " << count;

//     return 0;
// }




// Count a particular character

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string word = "Hello World";

//     char target = 'l';

//     int count = 0;

//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] == target)
//         {
//             count++;
//         }
//     }

//     std::cout << "Frequency: " << count;

//     return 0;
// }