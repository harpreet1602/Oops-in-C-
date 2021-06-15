#include <iostream>
using namespace std;
int main()
{
    int num = 154;
    cout << "\nRight shift by 4 bits: " << (num >> 4);
    cout << "\nLeft shift by 4 bits: " << (num << 4);
    //comma operator
    int x, y, z;
    x = y = 20;
    z = (x++, y--, x + y);
    cout << "\n"<<z;
    return 0;
}