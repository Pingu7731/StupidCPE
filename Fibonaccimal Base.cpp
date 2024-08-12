#include <bits/stdc++.h>
using namespace std;

vector<int> b(40);
void fb(){
    b[0] = 0;
    b[1] = 1;
    b[2] = 1;
    for (int i = 2; i <= 39;i++){
        b[i] = b[i - 1] + b[i - 2];
    }
}

int main()  {
    int t;
    cin >> t;

    fb();
    while (t--)
    {
        vector<int> ans;
        int flag=0;
        int n;
        cin >> n;
        int temp = n;

        for (int i = 39; i > 1;i--){
            if(n>=b[i]){
                n = n - b[i];
                ans.push_back(1);
                flag = 1;
                
            }
            else if (flag==1){
                ans.push_back(0);
            }
        }
        cout << temp << " = ";
        for(auto i:ans){
            cout << i;
        }
        cout << " (fib)" << endl;
    }

    return 0;
}
