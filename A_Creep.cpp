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
        int a, b;
        cin >> a >> b;
        string str = "";
        int x = a, y = b;
        for (int i = 0; i < a + b; i++)
        {
            if (i % 2 == 0)
            {
                if (x != 0)
                {
                    str += '0';
                    x--;
                }
                else if (y != 0)
                {
                    str += '1';
                    y--;
                }
            }
            else
            {
                if (y != 0)
                {
                    str += '1';
                    y--;
                }
                else if (x != 0)
                {
                    str += '0';
                    x--;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}