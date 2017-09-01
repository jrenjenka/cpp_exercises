#include <iostream>
#include "Sales_item.h"
/*
* This program read several transactions and
* counts how many transactions occur for each ISBN
*/

int main()
{
    Sales_item cntItems, nextItem;
    if (std::cin >> cntItems) {
        while (std::cin >> nextItem) {
            if (cntItems.isbn() == nextItem.isbn()) {
                cntItems += nextItem;
            } else {
                std::cout << std::endl << "Total: "
                          << cntItems << std::endl;
                cntItems = nextItem;
            }
        }
        std::cout << "Total: " << cntItems << std::endl;
        return 0;
    }

    std::cerr << "No transactions to read" << std::endl;
    return -1;
}
