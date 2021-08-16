#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // break statement
 for(int i = 1; i<=10;i++)
 {
     if(i == 4){
        break;
     }
     cout << i << endl;
 }

 // continue statement
 int j = 1;
 while(j<=10){
    if(j == 4){
        j++;
        continue;
    }
    cout << j << endl;
    j++;
 }
 getch();
}
