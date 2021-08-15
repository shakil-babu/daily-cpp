#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a , b; cin>>a>>b;
    int max = (a>b) ? a : b;
    cout << "Large Number is : " << max << endl;
    getch();
}
