#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    string name = "shakil";
    if(a > b){
        if(name == "shakil"){
            cout << "Name is equal" << endl;
        }
    }else if(a==b){
        cout << "A equal B" << endl;
    }
    else{
        cout << "A is small than B" << endl;
    }
    getch();
}

