#include <iostream>
#include "Sales_item.h"
/*
* This progrm reads several transactions for the same ISBN and writes their sum
*/

int main()
{
    Sales_item item, sum;
    if (std::cin >> sum) {
        while (std::cin >> item) {
            sum += item;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}
