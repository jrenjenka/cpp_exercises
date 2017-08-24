#include <iostream>

/*
* This program shows how to work with comments
*/

int main()
{
    std::cout << "/*" << std::endl;
    std::cout << "*/" << std::endl;
    // std::cout << /* "*/" */; // missing terminating '"' character
    std::cout << /* "*/" /* "/*" */ << std::endl;
    return 0;
}
