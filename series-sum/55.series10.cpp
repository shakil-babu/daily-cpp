#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // 1-2 + 3-4 + 5-6 + ......
    int even = 0, odd = 0, n;
    cin >> n;
    for(int i = 1; i<= n; i++){
        if(i%2 == 0){
            even += i ;
        }else{
            odd += i ;
        }
    }
    int result = odd - even ;
    cout << "Sum = " << result << endl;
    getch();
}
