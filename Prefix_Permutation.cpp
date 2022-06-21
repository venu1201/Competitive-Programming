#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, k = 999999, a{}, b{}, c{-999999}, d{}, x = 0, sum{}, j = 0;
        long long int y = 0, l, r;

        cin >> n >> k;
        map<long long, long long> m;
        vector<long long> v, s, t;
        y = -1;
        a = 0;
        for (i = 0; i < k; i++)
        {
            cin >> x;
            v.push_back(x);
            m[x]++;
        }

        if (x != n)
            v.push_back(n);
        x = 0;
        i = 0, l = 1;

        while (i < k)
        {
            x = v[i];
            for (j = x; j >= l; j--)
            {
                cout << j << " ";
            }

            i++;
            l = x + 1;
        }

        cout << endl;
    }

    return 0;
}