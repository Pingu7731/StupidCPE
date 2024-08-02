#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    map<char, int> m;
        string s;
    while(t--){
      
        getline(cin, s);
        for (char i : s){

            i = toupper(i);
            if (isalpha(i)){
                m[i]++;
            }
        }
      
        for(auto it:m) {
            cout << it.first << " " << it.second << endl;
        }

        
    }
    return 0;
}