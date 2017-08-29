#include <iostream>
/*
* This program reads an unkown number of inputs from isteam
* and prints its sum
*/

int main()
{
    int sum = 0, value = 0;

    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
