#include <bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define endl "\n"
#define prtarr(arr)           \
    for (auto it : arr)       \
    {                         \
        for (auto x : it)     \
        {                     \
            cout << x << ' '; \
        }                     \
        cout << endl;         \
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
        int n,m;

        cin >> n >> m;

        vector<string> arr(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            cin>>arr[i];
            
        }
        for (int i = 0; i < n; i++)
        {

            
            ans += count(arr[i].begin(), arr[i].end(), '1');
            
        }
        if (arr[0][0] == '1')
        {

            cout << -1 << endl;
            continue;;
        }

        cout << ans << endl;

        for (int i = n - 1; i >= 0; i--)
        {

            for (int j = m - 1; j >= 1; j--)
            {

                if (arr[i][j] == '1')
                {
                    cout << i + 1 << " " << j << " " << i + 1 << " " << j + 1 << endl;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {

            if (arr[i][0] == '1')
            {

                cout << i << " " << 1 << " " << i + 1 << " " << 1 << endl;
            }
        }
    }
    return 0;
}