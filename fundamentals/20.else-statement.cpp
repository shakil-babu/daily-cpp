#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a; cout << "Enter a number : "; cin >> a;

    // if statement
    if(a > 0){
        cout << "Positive" << endl;
    }else if(a<0){ // else if statement
        cout << "Negative" << endl;
    }else{ // else statement
        cout << "Equal to zero" << endl;
    }
    getch();
}





