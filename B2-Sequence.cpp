#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int cases = 0;
    while (cin >> t)
    {
        cases++;
        vector<int> v(t);
        bool flag = true;
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];

            if (v[i] <= 0)
            {
                flag = false;
            }
            if (v[i] != 0 && v[i - 1] >= v[i])
            {
                flag = false;
            }
        }
        set<int> check;

        for (int i = 0; i < t - 1; i++)
        {
            for (int j = i; j < t; j++)
            {
                int temp = v[i] + v[j];
                if (check.count(temp))
                {
                    flag = false;
                    break;
                }
                check.insert(temp);
            }
            if (!flag)
            {
                break;
            }
        }
        cout << "Case #" << cases;

        if (flag)
        {
            cout << ": It is a B2-Sequence." << endl
                 << endl;
        }
        else
        {

            cout << ": It is not a B2-Sequence." << endl
                 << endl;
        }
    }
    return 0;
}