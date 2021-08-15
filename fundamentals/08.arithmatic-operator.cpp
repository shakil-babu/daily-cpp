#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a,b, sum, sub, mul, div, reminder;
    cout << "Enter 2 numbers : " ; cin >> a >> b;

    // summetion
    sum  = a+b;
    // substraction
    sub = a-b;
    // multipication
    mul = a*b;
    // divide
    div = a/b;
    // remainder
    reminder = a%b;

    cout << sum << endl << sub << endl << mul << endl << div << endl << reminder << endl;
    getch();
}


