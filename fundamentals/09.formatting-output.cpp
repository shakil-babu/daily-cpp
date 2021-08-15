#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int a,b; cout << "Enter 2 numbers: " ;
    cin >> a >> b;
    // showpoint - it returns automatic digits after (.) point.
    float sum = a+b;
    cout << showpoint ;
    cout << sum << endl;
    // noshowpoint - did not return showpoint
    cout << noshowpoint;
    float sub = a-b;
    cout << "subtract - " << sub << endl;

    // fixed and setprecision() - print number after (.) point
    cout << fixed << setprecision(2);
    float mul = a * b;
    cout << mul << endl;

    getch();
}



