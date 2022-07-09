#include <iostream>

// 1.) User-Input: side lenght of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.


int main()
{
    double side_lenght;

    std::cout << "Please enter the side lenght of the square: ";
    std::cin >> side_lenght;

    double perimeter = side_lenght * 4;
    double area_of_square = side_lenght * side_lenght;

    std::cout << "The perimeter of the square is " << perimeter << "." << std::endl;
    std::cout << "The area of the square is " << area_of_square << "." << std::endl;

    return 0;
}
