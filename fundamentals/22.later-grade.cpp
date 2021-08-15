#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num; cout << "Enter a number : "; cin >> num;
    if(num > 100){
        cout << "Not allowed more than 100 number!" <<endl;
    }else if(num <0)
    {
        cout << "Negative number not allowed!" << endl;
    }else if(num >= 80){
        cout << "A+" << endl;
    }else if(num >= 70){
        cout << "A" << endl;
    }else if(num >= 60){
        cout << "A-" << endl;
    }else if(num >= 50){
        cout << "B" << endl;
    }else if(num >= 40){
        cout << "C" << endl;
    }else if(num >= 33){
        cout << "D" << endl;
    }else{
    cout<<"Fail" << endl;
    }
    getch();
}
