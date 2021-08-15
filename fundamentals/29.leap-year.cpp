#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a ; cin >> a;
    if(a % 4 == 0 && a%100 != 0){
        cout << "Leap Year" << endl;
    }else if(a % 100 == 0){
    cout << "Leap Year" << endl;
    }else{
    cout << "Not Leap Year" << endl;
    }
    getch();
}

