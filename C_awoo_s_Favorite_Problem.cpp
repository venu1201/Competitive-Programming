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
        string a, b;
        cin >> a >> b;
        int a1 = count(a.begin(), a.end(), 'a');
        int a2 = count(a.begin(), a.end(), 'b');
        int a3 = count(a.begin(), a.end(), 'c');
        int b1 = count(b.begin(), b.end(), 'a');
        int b2 = count(b.begin(), b.end(), 'b');
        int b3 = count(b.begin(), b.end(), 'c');
        if(a1!=b1 || a2!=b2 || a3!=b3)
        {
            no
            continue;
        }
        else
        {
            int x=0,y=n-1;
        }
        
    }
return 0;
}