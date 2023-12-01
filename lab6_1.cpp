#include<iostream>
using namespace std;

int main(){
    int odd = 0;
    int even = 0;
    int x = 1 ;
    while(x != 0){
        cout << "Enter an integer: ";
        cin >> x ;
        if(x != 0){
        if(x % 2 == 0)  even++;
        else odd++;}
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}