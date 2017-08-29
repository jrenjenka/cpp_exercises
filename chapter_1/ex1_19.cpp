#include <iostream>
/*
* This is revisited version of ex1_11 which handles input in which the first number is smaller than the second
*/

int main()
{
    std::cout << "Enter two integers:" << std::endl;

    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "There is the range of " << i1 << " and " << i2
              << std::endl;

    if (i1 < i2) {
        while (i1 <= i2) {
            std::cout << i1 << " ";
            ++i1;
        }
    } else {
        while (i2 <= i1) {
            std::cout << i2 << " ";
            ++i2;
        }
    }
    std::cout << std::endl;
    return 0;
}
