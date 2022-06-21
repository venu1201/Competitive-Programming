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
        int a, b, n;
        cin >> a >> b >> n;
    int x = a ^ b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        

        if (x < n)
        {
            cout << 1 << endl;
            continue;
        }

        vector<int> arr;
        int pos = 1;
         int sum=0;
        int c = 0;

        int y = x;
        while (x > 0)
        {

            c = 1;
            if (x % 2 == 1)
            {
                arr.push_back(pos);
            }

            pos = 2 * pos;

            x = x / 2;
        }

        x = y;
        c = 0;
        int d = 0;
    int flag=0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (arr[i] >= n)
            {
                flag = 1;
                break;
            }

            if (sum >= n)
                d++;
            else
                c = 1;
        }

        if (flag == 0)
        {
            cout << c + d << endl;
            continue;
        }

        cout << -1 << endl;
    
}
return 0;
}