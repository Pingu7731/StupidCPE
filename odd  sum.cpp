#include <bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >> t;
    
    int cases = 0;
    while(t--){
        int a, b;
        cases++;
        int ans = 0;
        cin >> a >> b;
        if(a%2==0){
            a++;
        }
        if(b%2==0){
            b--;
        }
        for (int i = a; i <= b;i+=2){
            ans += i;
        }
        cout << "Case " << cases << ": " << ans << endl;
    }
    return 0;
}