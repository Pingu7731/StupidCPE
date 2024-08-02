#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    while(cin >> t){
     

    map<string, int> m;
    for (int i = 0; i < t;i++){
        string s,city;
        cin >> city;
        getline(cin, s);
        m[city]++;
    }
    for(auto i:m){
        cout << i.first << ' ' << i.second << endl;
    }
    }
    return 0;
}