#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b;
    while(cin >> a>>b){
        if(a==0&&b==0){
            break;
        }
        int carry = 0;
        int carried = 0;
        while (a>0 ||b>0)
        {
            int tema = a % 10;
            int temb = b % 10;
            if(tema+temb+carry >=10){
                carry = 1;
                carried ++;
            }else {
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }
        if(carried == 0){
            cout <<"No carry operation." << endl;
        }
        else if(carried == 1){
            cout <<"1 carry operation." << endl;
        }
        else{
            cout <<carried<<" carry operations." << endl;
        }
       
    }
     return 0;
}