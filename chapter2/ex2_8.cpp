/* ex2.8
** Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.
*/

#include <iostream>
using namespace std;

int main() {

    // print 2M followed by a newline
    cout << "2\115\n";

    // modify the program to print 2, tab, M, newline
    cout << "2\t\115\n";
    return 0;
}
