#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // there are two ways to find length of any strings
    string name ="Shakil Babu";
    // using length() method
    cout << name.length() << endl;

    // using size() method
    cout << name.size() << endl;

    // string accessing
    cout << name[0] << endl;
    getch();
}
