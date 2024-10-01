#include <bits/stdc++.h>

using namespace std;

int main (){
    string s;
    bool flag = false;
    while(getline(cin,s)){
        for (int i = 0; i < s.size();i++){
            if(s[i]==' '){
                cout << ' ';
            }
            if(s[i]=='"'&&flag ==false){
                s[i] = '`';
                s.insert( s.begin() + i,'`');
                flag = true;
            }
            if(s[i]=='"'&&flag==true){
                s[i] = '\'';
                s.insert(s.begin() + i, '\'');
                flag = false;
            }
        }
        cout << s<<endl;

    }
    return 0;
}