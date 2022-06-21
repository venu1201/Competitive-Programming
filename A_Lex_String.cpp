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
        int a, b, c;
        cin >> a >> b >> c;
        string str, sstr;
        cin >> str >> sstr;
        int x = 0, y = 0;
        int c1 = 0, c2 = 0;
        string ans = "";
        sort(str.begin(),str.end());
        sort(sstr.begin(),sstr.end());
        while (x != str.size() && y != sstr.size())
        {
            if (str[x] > sstr[y])
            {
                if (c2 != c)
                {
                    ans += sstr[y];
                    c2++;
                    y++;
                    c1=0;
                }
                else
                {
                    ans += str[x];
                    c2=0;
                    x++;
                    c1++;
                }
            }
            else
            {
                if (c1 != c)
                {
                    ans += str[x];
                    c1++;
                    x++;
                    c2=0;
                }
                else
                {
                    ans += sstr[y];
                    c2++;
                    y++;
                    c1=0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}