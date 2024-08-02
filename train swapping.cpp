#include <bits/stdc++.h>
using namespace std;

int main (){
    string k = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
     
    string s;
    while(getline(cin,s)){
        for (int i = 0; i < s.size();i++){
            if(s[i]==' '){
                cout << s[i];
            }else 
            {
                int a = k.find(tolower(s[i]));
                cout << k[a - 2];
            }
        }
        cout << endl;
         
    }
    cout << endl;
        
    return 0;
}