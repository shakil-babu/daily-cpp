#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    char c; cin >> c;
    if(c == 'a' || c=='e' || c == 'i' || c=='o' || c=='u')
    {
        cout << "VOWEL" << endl;
    }else
    {
        cout << "CONSONANT" << endl;
    }
    getch();
}
