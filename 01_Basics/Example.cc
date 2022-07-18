#include <iostream>

// 1.) User-Input: Integer Number
// 2.) Compute the absolute value of an integer value
// 3.) Print out the absolute value

// x < 0: -x
// x >= 0: x

int main()
{
    int number;

    std::cout << "Please enter a number:";
    std::cin >> number;

    int absolute;

    if (number < 0)
    {
        absolute = (-1) * number;
    }
    else
    {
        absolute = number;
    }

    std::cout << "The absolute value of number is: " << absolute << std::endl;

    return 0;
}
