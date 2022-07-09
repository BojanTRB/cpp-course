#include <iostream>

// Multiplication *
// Addition +
// Subtraction -
// Divison /

int main()
{
    float number_one = 10;
    float number_two = 3;
    float result = 0;

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
