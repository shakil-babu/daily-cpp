#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    // sizeof(), comma(,)
    int num = 10;
    cout << sizeof(num) << endl;

    double n = 12.3333;
    cout << sizeof(n) << endl;

    char s[13] = "Shakil Babu";
    cout << sizeof(s) << endl;

    string name = "shakil babu";
    cout << sizeof(name) << endl;

    bool is = true;
    cout << sizeof(is) << endl;
    getch();

    // bool = 1 bit
    // char = 1 bit
    // string = 32 bit
    // int = 4 bit;
    // float = 4 bit;
    // double = 8 bit;


}
