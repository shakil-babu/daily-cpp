#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1.3 + 2.5 + 3.7 + ... + n1.n2
    int sum = 0, a=1, b = 3, n1, n2;
    cin >> n1 >> n2;
    while(a <= n1 && b <= n2)
    {
        sum += a*b;
        a++;
        b+=2;
    }
    cout << sum << endl;
    getch();
}
