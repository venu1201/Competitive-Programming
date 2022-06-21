#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n, i, d{}, x = 0, sum{}, j = 0;

        string s;

        cin >> n;
        cin >> s;
        char t = s[0];
        sum++;
        for (i = 1; i < n; i++)
        {
            if (s[i] != t)
            {
                t = s[i];
                sum++;
            }
        }

        if ((sum) % 3 == 2)
        {
            cout << "RAMADHIR";
        }
        else
            cout << "SAHID";

        cout << endl;
    }

    return 0;
}