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
        int n, x, y;

        cin >> n;
        set<long long> s;
        vector<pair<int, int>> arr;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;

            arr.push_back(make_pair(x, y));
        }

        sort(begin(arr), end(arr), [](std::pair<int, int> const &lhs, std::pair<int, int> const &rhs)
             { return std::abs(lhs.first - lhs.second) < std::abs(rhs.first - rhs.second); });

        for (int i = 0; i < n; i++)
        {
            x = arr[i].first;
            y = arr[i].second;

            if (x == y)
            {
                mp[i] = x;
                s.insert(x);
                continue;
            }

            for (int j = x; j <= y; j++)
            {
                if (s.count(j) == 0)
                {
                    mp[i] = j;
                    s.insert(j);
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {

            x = arr[i].first;
            y = arr[i].second;
            cout << x << " " << y << " " << mp[i] << endl;
        }

        cout << endl;
    }

    return 0;
}