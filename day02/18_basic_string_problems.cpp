// Count Vowels

#include <iostream>
#include <string>

int countVowels(std::string word)
{
    int count = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a' ||
            word[i] == 'e' ||
            word[i] == 'i' ||
            word[i] == 'o' ||
            word[i] == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string word = "programming";

    std::cout << "Vowels: "
              << countVowels(word);

    return 0;
}







// Count Digits

// #include <iostream>
// #include <string>

// int countDigits(std::string word)
// {
//     int count = 0;

//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] >= '0' && word[i] <= '9')
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main()
// {
//     std::string word = "MCA2026";

//     std::cout << "Digits: "
//               << countDigits(word);

//     return 0;
// }





// Reverse a String

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string word = "Hello";

//     for (int i = word.length() - 1; i >= 0; i--)
//     {
//         std::cout << word[i];
//     }

//     return 0;
// }











// Compare first and last Palindrome

// #include <iostream>
// #include <string>

// bool isPalindrome(std::string word)
// {
//     int left = 0;
//     int right = word.length() - 1;

//     while (left < right)
//     {
//         if (word[left] != word[right])
//         {
//             return false;
//         }

//         left++;
//         right--;
//     }

//     return true;
// }

// int main()
// {
//     std::string word = "madam";

//     if (isPalindrome(word))
//     {
//         std::cout << "Palindrome";
//     }
//     else
//     {
//         std::cout << "Not Palindrome";
//     }

//     return 0;
// }





// Count Uppercase Letters


// #include <iostream>
// #include <string>

// int countUppercase(std::string word)
// {
//     int count = 0;

//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] >= 'A' && word[i] <= 'Z')
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main()
// {
//     std::string word = "Mca PROGRAM";

//     std::cout << "Uppercase: "
//               << countUppercase(word);

//     return 0;
// }






// Count Lowercase Letters

// #include <iostream>
// #include <string>

// int countLowercase(std::string word)
// {
//     int count = 0;

//     for (int i = 0; i < word.length(); i++)
//     {
//         if (word[i] >= 'a' && word[i] <= 'z')
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main()
// {
//     std::string word = "Mca PROGRAM";

//     std::cout << "Lowercase: "
//               << countLowercase(word);

//     return 0;
// }