#include <iostream>

int main()
{
    std::cout << "Enter two number:" << std::endl;
    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "The product of " << i1 << " and "
              << i2 << " is " << i1 * i2 << std::endl;
}
