#include <iostream>

int main()
{
    int number;
    std::cout << "Please enter your number: ";
    std::cin >> number;

    if (number >= 0 && number <= 10)
    {
        std::cout << "TRUE" << std::endl;
    }
    else
    {
        std::cout << "FALSE" << std::endl;
    }

    return 0;
}
