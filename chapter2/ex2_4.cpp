/* exercises 2.3 and 2.4
** What output will the following code produce?
*/

#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32, u2 > u
    std::cout << u - u2 << std::endl; // both unsigned, but the result will wrap around because u < u2: 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32, both int, int can be signed

    std::cout << i - u << std::endl; // 0, int and unsigned, but the result isn't negative
    std::cout << u - i << std::endl; // 0, unsigned and int, but the result isn't negative

    return 0;
}
