#include <iostream>

int main()
{
    double number_one;
    double number_two;
    double result = 0.0;

    std::cout << "Please enter the first number: ";
    std::cin >> number_one;

    std::cout << "Please enter the second number: ";
    std::cin >> number_two;


    result = number_one * number_two;
    std::cout << "number_one * number_two = " << result << std::endl;

    result = number_one + number_two;
    std::cout << "number_one + number_two = " << result << std::endl;

    result = number_one - number_two;
    std::cout << "number_one - number_two = " << result << std::endl;

    result = number_one / number_two;
    std::cout << "number_one / number_two = " << result << std::endl;

    return 0;
}
