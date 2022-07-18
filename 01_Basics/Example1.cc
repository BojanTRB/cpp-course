#include <iostream>

// 1.) User-Input: Integer Number (Year)
// 2.) Compute if the year is a leap year
// 3.) Print out the absolute value

// Leap Year:
// 1.) divisble by 4
// 2.) if divisble by 100, then only a leap year if its divisble by 400

int main()
{
    unsigned int year;

    std::cout << "Please enter the year: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << year << " is a leap year." << std::endl;
            }
            else
            {
                std::cout << year << " is not a leap year." << std::endl;
            }
        }
        else
        {
            std::cout << year << " is a leap year." << std::endl;
        }
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
