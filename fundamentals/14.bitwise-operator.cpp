#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int a = 32, b = 12, c;
    c = a & b;
    cout << c << endl;

    c = a | b;
    cout << c << endl;

    c = a ^ b;
    cout << c << endl;

    getch();
}


