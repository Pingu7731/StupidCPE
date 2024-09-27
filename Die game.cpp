#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string s;
    while (cin >> n)
    {
        map<string, int> d;
        d["top"] = 1;
        d["north"] = 2;
        d["west"] = 3;
        d["south"] = 5;
        d["east"] = 4;
        d["down"] = 6;
        if (n == 0)
        {
            break;
        }
        while (n--)
        {
            cin >> s;

            if (s == "north")
            {
                int temp = d["top"];
                d["top"] = d["south"];
                d["south"] = d["down"];
                d["down"] = d["north"];
                d["north"] = temp;
            }
            if (s == "east")
            {
                int temp = d["top"];
                d["top"] = d["west"];
                d["west"] = d["down"];
                d["down"] = d["east"];
                d["east"] = temp;
            }
            if (s == "south")
            {
                int temp = d["top"];
                d["top"] = d["north"];
                d["north"] = d["down"];
                d["down"] = d["south"];
                d["south"] = temp;
            }
            if (s == "west")
            {
                int temp = d["top"];
                d["top"] = d["east"];
                d["east"] = d["down"];
                d["down"] = d["west"];
                d["west"] = temp;
            }
        }
        cout << d["top"] << endl;
    }
}