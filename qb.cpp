#include <bits/stdc++.h>

using namespace std;
int main (){
    int n;
    cin >> n;
    if (n>1||n<0){
        cout << "error";
        return 0;
    }
    if(n==1){
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
  cout << i <<" x "<< j << " = "<< i*j<<"\t";
        
            }
              cout << endl;
              
        }
        
      
    }
     if(n==0){
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
            cout << j <<" x "<< i << " = "<< i*j<<"\t";
        
            }
              cout << endl;
              
        }

    }
    
        return 0;
    }
