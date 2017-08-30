#include <iostream>
#include "Sales_item.h"

/*
* This program reads a set of book sales transactions and write each transaction to the standart output
*/

int main()
{
    Sales_item book;
    while (std::cin >> book) {
        std::cout << book << std::endl;
    }
    return 0;
}
