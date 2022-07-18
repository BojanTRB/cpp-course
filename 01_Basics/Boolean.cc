#include <iostream>

// !true == false
// !false == true

int main()
{

    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    bool check = (number >= 0 && number <= 10);
    std::cout << std::boolalpha << check << std::endl;

    std::cout << std::boolalpha << !check << std::endl;

    return 0;
}
