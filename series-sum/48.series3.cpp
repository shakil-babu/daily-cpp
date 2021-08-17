#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // summetion of --> 2+4+6+ ..... + n
    int sum = 0, n; cin >> n;
    for(int i = 2; i<=n; i=i+2){
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    getch();
}

