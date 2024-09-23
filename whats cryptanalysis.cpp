#include <bits/stdc++.h>

using namespace std ;

bool compare(pair<char,int>a,pair<char,int>b){
    return a.second > b.second;
}

int main (){
    int t;
    cin >> t;
    cin.ignore();
    map<char, int> m;
    
    string s;
    while(t--){
        getline(cin, s);
        for(auto i:s){
            if(isalpha(i)){
                i = toupper(i);
                m[i]++;
            }
        }


    }
    vector<pair<char, int>> v(m.begin(),m.end());
    sort(v.begin(), v.end(), compare);

    for (auto i:v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}