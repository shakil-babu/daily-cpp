#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1^2 + 2^2 + 3^2 + 4^2 + .... + n^2
    int sum = 0, n; cin >> n ;
    for(int i = 1; i<=n; i++){
        sum += i*i;
    }
    cout << sum << endl;
    getch();
}
