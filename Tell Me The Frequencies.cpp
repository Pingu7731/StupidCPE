#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    else{
        return a.first > b.first;
    }
}

int main (){
    bool flag = false;
    string s;
    while(getline(cin ,s)){
        if(flag){
            cout << endl;
        }
        flag = true;
        vector<pair<int, int>>v;
        map<int, int> m;
        for (int i = 0; i < s.size();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            v.push_back(i);
        }
        sort(v.begin(), v.end(), compare);

        for(auto i :v){
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}