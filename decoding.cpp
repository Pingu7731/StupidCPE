#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    string s;
    int count = 0;
    char tmp;
    int ca = 0;
    cin >> t;
   
    while(t--){
        ca++;
        cout << "Case " << ca << ": ";
        count = 0;
        cin >> s;
        for (int i = 0; i <= s.size();i++){
            if(i!=s.size()&& !isalpha(s[i])){
                count *= 10;
                count += s[i] - '0';
            }
            else {
                if(count == 0){
                    tmp = s[i];
                }else {
                    for (int i = 0; i < count;i++){
                        cout << tmp;
                       
                    }
                    count = 0;
                    tmp = s[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
