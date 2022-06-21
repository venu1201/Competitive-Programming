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
        int n;
        cin >> n;
        vector<int> arr(n);
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                b++;
            }
            else
            {
                a++;
            }
        }
        if (b == n)
        {
            cout << 0 << endl;
        }
        else
        {
            if (a != n && b != n)
            {
                cout << a << endl;
            }
            else
            {
                int ans = 99999999999999999;
                for (int i = 0; i < n; i++)
                {
                    int cnt=0;
                    while (arr[i] % 2 == 0)
                    {
                        arr[i] = arr[i] / 2;
                        cnt++;
                    }
                    ans=min(cnt,ans);
                    
                }
                

                a--;
                cout << ans + a << endl;
            }
        }
    }
    return 0;
}