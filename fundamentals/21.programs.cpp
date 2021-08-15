#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a; cout << "Enter a number : "; cin >> a;
    // is it even or odd ?
    if(a%2 == 0){
        cout << "Even" << endl;
    }else
    {
        cout << "Odd" << endl;
    }
    getch();
}
