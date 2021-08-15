#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    double farenheight, celcius;
    cout << "Enter celcius : " ; cin >> celcius ;

    farenheight = 1.8 * celcius + 32;
    cout << "Farenheight = " << farenheight << endl;
    getch();
}




