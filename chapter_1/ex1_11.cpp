#include <iostream>
/*
* This program prompts the user for two integers
* and prints each number in the range specified by those two integers
*/

int main()
{
    // prompt user for two integers
    std::cout << "Enter two numbers" << std::endl;
    int i1 = 0, i2 = 0;     // define variables to hold two integers
    std::cin >> i1 >> i2;   // store the input in two variables

    std::cout << "This is the range of " << i1 << " and " << i2
              << ":" << std::endl;

    while (i1 <= i2) {
        std::cout << i1 << " ";
        ++i1;
    }

    std::cout << std::endl;

    return 0;
}
