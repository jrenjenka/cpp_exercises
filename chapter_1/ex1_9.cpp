#include <iostream>
/*
* This program sums the numbers from 50 to 100 using a while loop
*/

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "The sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}
