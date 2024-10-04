#include <bits/stdc++.h>

using namespace std;

bool c(pair<int,int>a,pair<int,int>b){
    if(a.second!=b.second){
        return a.second < b.second;
    }else{
        return a.first > b.first;
    }
}
int main (){
    string s;
    bool flag = false;
    while(getline(cin,s)){
        map<int, int> m;
        vector<pair<int, int>> v;
        if(flag==true){
            cout << endl;
        }
        flag = true;
        for (int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        for(auto i:m){
            v.push_back(i);
        }
        sort(v.begin(), v.end(), c);

        for(auto i:v){
            cout << i.first << " " << i.second << endl;
        }

    }
    return 0;
}