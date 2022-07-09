#include <iostream>

// Multiplication *
// Addition +
// Subtraction -
// Divison /

int main()
{
    double number_one = 10.0;
    double number_two = 2.0;
    double result = 0.0;

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
