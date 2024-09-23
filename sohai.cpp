#include <bits/stdc++.h>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string ans;
   
    string character = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+{}|QWERTYUIOPASDFGHJKLZXCVBNM";

    

    while (getline(cin, ans)) {
        string revealed = "";  
        for (auto i : ans) {
            if (i == ' ') {
                revealed += ' ';
                cout << revealed << endl;
            } else {
                char actualChar = i;  
                
                for (int k = 0; k < 10; k++) {  
                    char randomChar = character[rand() % character.size()];
                    cout << revealed + randomChar << "\r"; 
                    fflush(stdout);  
                    this_thread::sleep_for(chrono::milliseconds(50));  
                }
                revealed += actualChar;  
                cout << revealed << endl; 
            }
        }
        cout << endl; 
    }
    return 0;
}
