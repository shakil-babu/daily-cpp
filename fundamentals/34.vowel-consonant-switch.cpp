#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char a; cout << "Enter a character :" ; cin >> a;
    a = tolower(a);

    switch(a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }
    getch();
}
