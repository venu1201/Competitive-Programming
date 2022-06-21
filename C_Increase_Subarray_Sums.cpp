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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> dp(n + 1, -1LL * 1e12);

        for (int i = 0; i < n; i++)
        {
            int val = 0;
            for (int j = i; j < n; j++)
            {
                val += arr[j];
                dp[j - i + 1] = max(dp[j - i + 1], val);
            }
        }

        for (int i = 0; i <= n; i++)
        {
            int ans = 0;
            for (int j = 1; j <= n; j++)
            {
                ans = max(ans, dp[j] + (min(i, j) * x));
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}