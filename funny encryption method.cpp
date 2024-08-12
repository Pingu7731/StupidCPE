#include <bits/stdc++.h>


using namespace std;

int main (){
    int t;
    cin >> t;
      int ansbin = 0, ansh = 0;
    while(t--){
        int n;
        cin >> n;
        string bin;
        bin = bitset<16>(n).to_string();
   
        int hex = n;
        int x1 = 0, mul = 1;
        while(hex){
            x1 += (hex % 10) * mul;
            hex /= 10;
            mul *= 16;
        }
        
        string anshex = to_string(x1);
       
      
        for (int i = 0; i < bin.size();i++){
            if(bin[i]='1'){
                ansbin++;
            }
        }
        for (int i = 0; i < anshex.size();i++){
            if(anshex[i]=='1'){
                ansh++;

            }
        }
        cout << ansbin << " " << ansh << endl;
    }
    return 0;
}