#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 1.2 + 2.3 + 3.4 + 4.5 + 5.6 + ... + n1.n2
    int sum = 0, n1, n2, a=1, b=2;
    cin >> n1 >> n2 ;
    while(a <= n1 && b <= n2)
    {
        sum = sum + a*b;
        a++;
        b++;
    }
    cout << sum << endl;
    getch();
}
