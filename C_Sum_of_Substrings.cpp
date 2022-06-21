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
int total(string &str)
{
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        int x = (str[i] - '0') * 10 + (str[i + 1] - '0');
        sum += x;
    }
    return sum;
}
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int a = 0, b = -1, sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            b = n - 1 - i;
            if (str[i] == '1')
            {
                if (k >= b)
                {
                    k = k - b;
                    swap(str[i], str[n - 1]);
                }
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {

            sum += (str[i] - '0') * 10 + (str[i + 1] - '0');
        }

        int ans = sum;
        sum = 0;

        for (int i = 0; i < n; i++)
        {

            int x = i;

            if (str[i] == '1')
            {
                if (k >= x)
                {
                    k = k - x;
                    swap(str[i], str[0]);
                }
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {

            sum += (str[i] - '0') * 10 + (str[i + 1] - '0');
        }

        cout << min(sum, ans) << endl;
    }
    return 0;
}