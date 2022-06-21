#include <bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define endl "\n"
#define debug1dv(arr)          \
    {                          \
        for (auto it : arr)    \
            cout << it << " "; \
        cout << endl;          \
    }
#define debug2dv(arr)             \
    {                             \
        for (auto it : arr)       \
        {                         \
            for (auto x : it)     \
                cout << x << " "; \
            cout << endl;         \
        }                         \
    }
#define debugmap(mp)                                       \
    {                                                      \
        for (auto it : mp)                                 \
            cout << it.first << "->" << it.second << endl; \
    }
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
        int k, x;
        cin >> k >> x;
        int cnt = 0;
        int sum = 0;
        int h = 0;
        for (int i = 1; i <= 1e5; i++)
        {
            if (i > k)
            {
                h = 1;
                break;
            }
            cnt++;
            sum += i;
            if (sum >= x)
            {
                h = 1;
                break;
            }
        }
        if (h == 0)
        {
            for (int i = 1e5 + 1; i <= 1e9; i++)
            {
                if (i > k)
                {
                    h = 1;
                    break;
                }
                cnt++;
                sum += i;
                if (sum >= x)
                {
                    h = 1;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}