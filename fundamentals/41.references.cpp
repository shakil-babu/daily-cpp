#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string name = "Shakil Babu";
    string &person = name;
    cout << person << endl;
    cout << name << endl;
    getch();
}
