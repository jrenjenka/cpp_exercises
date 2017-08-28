#include <iostream>
/*
* This program is the rewritten version of ex1_9 - ex1_11
* using the for loop instead of the while loop
*/

int main()
{
    // ex1_9: sum the numbers from 50 to 100
    std::cout << "ex1_9: sum the numbers from 50 to 100." << std::endl;
    int sum = 0;
    for (int i = 50; i <=100; ++i)
        sum += i;

    std::cout << "This is the sum of numbers from 50 to 100 inclusive: "
              << sum << std::endl << std::endl;

    // ex1_10: print the numbers from 10 to 0
    std::cout << "ex1_10: print the numbers from 10 to 0." << std::endl;
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
    std::cout << std::endl;

    // ex1_11: prompt the user for two integers and print their range
    std::cout << "ex1_11: prompt the user for two integers and print their range."
              << std::endl;
    std::cout << "Enter two integers:" << std::endl;
    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "There is the range of " << i1 << " and "
              << i2 << std::endl;
    for (; i1 <= i2; ++i1)
        std::cout << i1 << " ";
    std::cout << std::endl;
    return 0;
}
