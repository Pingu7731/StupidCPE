#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    int flag = 0;
    while(getline(cin,s)){
        for (int i = 0; i < s.size();i++){
            if(s[i]=='"'&&flag ==0){
                s[i] = '`';
                s.insert(s.begin()+i,'`');
                flag = 1;
            }
            if(s[i]=='"'&&flag==1){
                s[i] = '\'';
                s.insert(s.begin() + i, '\'');
                flag = 0;
            }
            cout << s[i];
        }
        cout << endl;
    }
}