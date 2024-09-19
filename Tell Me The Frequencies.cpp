#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    bool flag = false;
    while(getline (cin,s)){
        int v[128] = {0};
        if(flag){
            cout << endl;
        }
        flag = true;
        for (int i = 0; i < s.size();i++){
            v[s[i]]++;
        }
        for (int i = 1;i<s.size();i++){
            for (int j = 127; j >= 32;j--){
                if(v[j]==i){
                    cout << j << " " << i << endl;
                }
            }
        }
    }
    return 0;   
}