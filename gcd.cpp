#include <bits/stdc++.h>

using namespace std;

// int GCD(int a, int b){
//     if (b == 0){

//         return a;
//     }
//     else {
//         return GCD(b, a % b);
//     }
// }

int main (){
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        else {
            int g = 0;
        for (int i = 1; i < n;i++){
            for (int j = i + 1; j <= n;j++){
                g += __gcd(i, j);
            }
        }
        cout << g << endl;
        }
        
    }
}