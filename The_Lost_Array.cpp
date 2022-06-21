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

        vector<int> arr(n + 1);

        int x = 0;
        for (int i = 0; i <= n; i++)
        {
            cin >> arr[i];
            x = x ^ arr[i];
        }
        if (n % 2 == 1)
        {
            int ch = 1;
            for (int i = 0; i <= n; i++)
            {

                if (x == arr[i] && ch == 1)
                {
                    ch = 0;
                    continue;
                }

                int p = x ^ arr[i];

                cout << p << " ";
            }

            cout << endl;
        }
        else
        {
            int b=99999999999999999;
            int c=b;
            int a;
            for(int i=0;i<=n;i++)
            {
                x=arr[i];
                a=__builtin_popcount(arr[i]);
                if(b>=a)
                {
                    b=a;
                    c=min(c,x);
                }
            }
            int x=c;
            int ch=1;
            for(int i=0;i<=n;i++)
            {
                if(x==arr[i] && ch==1)
                {
                    ch=0;
                    continue;
                }
                int ans=x^arr[i];
                cout<<ans<<" ";
            }cout<<endl;

        }
    }
    return 0;
}