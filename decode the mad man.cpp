#include <bits/stdc++.h>

using namespace std;

int main (){
    string t;
    string k = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    while (getline(cin, t))
    {
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == ' ')
            {
                cout << t[i];
            }else {
              cout << k[k.find(tolower(t[i])) - 2];
            }
        }
        cout << endl;
    }
        return 0;
}