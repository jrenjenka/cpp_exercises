#include <iostream>
#include "Sales_item.h"

/*
* This program read two Sales_item objects with the same ISBN and produse their sum
*/

int main()
{
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    std::cout << book1 + book2 << std::endl;
    return 0;
}
