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
        int n,x;
        cin >> n;
        vector<long long>  v,s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
            sum += x;
            s.push_back(sum);
        }

        if (n == 1)
        {
            cout << v[0] << endl;
            continue;
        }
        sum = LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {

            sum = min(sum, max(s[i], s[s.size() - 1] - s[i]));
        }

        cout << sum << endl;
    }
    return 0;
}