#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int cases = 1;
    while(t--){
        cout << "Case #" << cases++ << ":" << endl;
        vector<string> w(10);
        vector<int> r(10);
        for (int i = 0; i < 10;i++){
            cin >> w[i] >> r[i];
        }

        
    }
}

// int T;
//     string page[10];
//     int V[10];
//     cin >> T;
//     for (int Case = 1; Case <= T; Case++){
//         int mx_score = 0;
//         for (int i = 0; i < 10; i++){
//             cin >> page[i] >> V[i];
//             mx_score = max(mx_score, V[i]);
//         }
//         cout << "Case #" << Case << ":\n";
//         for (int i = 0; i < 10; i++) {
//             if (V[i] == mx_score) {
//                 cout << page[i] << "\n";
//             }
//         }
//     }
//     return 0;