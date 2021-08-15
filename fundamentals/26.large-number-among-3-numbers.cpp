#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    if(a>b && a>c){
        cout << a << " is large" << endl;
    }else if(c>b && c>a){
        cout << c << " is large" << endl;
    }else{
        cout << b << " is large" << endl;
    }
    getch();
}
