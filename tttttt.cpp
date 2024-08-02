#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while(cin >> a>>b){
        int v[a][b];
        for (int i = 0; i < a;i++){
            for (int j = 0; j < b;j++){
                cin >> v[j][i];
                
            }
        }
        for (int i = 0; i < b;i++){
            for (int j = 0; j < a;j++){
                cout << v[i][j]<<" ";

            }
            cout << endl;
        }
    }
    return 0;
}