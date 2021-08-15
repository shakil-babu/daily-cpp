#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 12;
    int b;
    b = a >> 2; // -> 12/2=6, 6/2=3
    // ans = 3
    cout << b << endl;

    int c = a << 2; // -> 12*2 = 24, 24*2=48
    // ans = 48
    cout << c << endl;
    getch();

    // >> - right shift
    // << - left shift
}
