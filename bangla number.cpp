#include <bits/stdc++.h>

using namespace std;

void solve(long long n){
if(n/10000000){
    solve(n / 10000000);
    cout << " kuti";
    n %= 10000000;

}
if(n/100000){
    solve(n / 100000);
    cout << " lakh";
    n %= 100000;
}
if(n/1000){
    solve(n / 1000);
    cout << " hajar";
    n %= 1000;
}
if(n/100){
    solve(n / 100);
    cout << " shata";
    n%=100;
}

if(n!=0)
    cout <<" "<< n;
}
int main (){
    long long n;
    int t = 0;
    while (cin >> n){
        t++;
        printf("%4d.", t);
        if(n)solve(n);
        else
            cout << " 0";
        cout << endl;

    }
}