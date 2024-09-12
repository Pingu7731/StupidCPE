#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    
  
    while(cin >> t){
       vector<int> v(t);
       vector<int> chck;
       int flag = 0;     
       for (int i = 0; i < t; i++)
       {
           cin >> v[i];
            
        }
        for (int i = 1; i < v.size();i++){
            int c = abs(v[i] - v[i - 1]);
            chck.push_back(c);
        }
        sort(chck.begin(), chck.end());
        
        
        for (int i = 0; i < chck.size();i++){
           
            if(chck[i]!=i+1){
                flag = 1;
                break;
            }
        }
        if(flag !=1){
            cout << "Jolly" << endl;
        }else {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}