#include <iostream>
/*
* This program prints numbers from 10 to 0 using a while loop
*/

int main()
{
    int val = 10;   // initialize a variable
    while (val >= 0) {
        std::cout << val << std::endl;
        --val;
    }
    return 0;
}
