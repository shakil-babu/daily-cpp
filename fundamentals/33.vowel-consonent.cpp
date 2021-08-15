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
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }
    getch();
}

