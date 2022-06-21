#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<long long> v, s;
        int i,y,k,x,sum;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        y = 0;
        k = 0;

        if (n == 3)
        {
            if (v[1] % 2 == 1)
            {
                cout << -1 << endl;
                continue;
            }

            cout << (v[1] + 1) / 2 << endl;
            continue;
        }

        for (i = 1; i < n - 1; i++)
        {
            if (v[i] != 1)
                k++;
        }

        if (k == 0)
        {
            cout << -1 << endl;
            continue;
        }

        sum = 0;
        for (i = 1; i < n - 1; i++)
        {

            if (v[i] % 2 == 0)
            {
                sum += v[i] / 2;
            }
            else
                sum += (v[i] + 1) / 2;
        }

        cout << sum << endl;
    }
    return 0;
}