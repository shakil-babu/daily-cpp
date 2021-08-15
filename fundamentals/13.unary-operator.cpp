#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    // unary operator - it's use with a one operand like below
    int a = 10, b;
    b = +10; // dosen't need to assign + operator

    // minus unary operator
    int c = 200, d;
    d = -c;

    // increment
    // ++x - increments x by one Before it is used.
    // x++ - increments x by one after it is used.

    int first=10, second = 20;
    first = ++second;
    cout << first << endl; // 21
    second = first++;
    cout << second << endl; // 21

    // decrement as like as oposite of increment
    getch();
}

