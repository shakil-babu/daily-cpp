#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1 * 2 * 3 * .... * n
    int multipication = 1, n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        multipication *= i;
    }

    cout << multipication << endl;
    getch();
}
