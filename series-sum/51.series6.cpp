#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1 + 4 + 7 + .... + n
    int sum = 0, n; cin >> n ;
    for(int i = 1; i<=n; i+=3){
        sum += i ;
    }
    cout << sum << endl;
    getch();
}
