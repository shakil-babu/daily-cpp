#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1^2 * 2^2 * 3^2 * .... * n^2
    int multipication = 1, n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        multipication *= i*i;
    }

    cout << multipication << endl;
    getch();
}

