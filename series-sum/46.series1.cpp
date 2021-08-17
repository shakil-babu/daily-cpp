#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // summetion of --> 1 + 2 + 3 + 4 + ..... + n
    int sum = 0, n; cin >> n;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    getch();
}
