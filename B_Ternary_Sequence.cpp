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
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        int sum = 0;
        if (c > y)
        {
            c -= y;
            sum += y * 2;
            y = 0;
        }
        else if (c == y)
        {
            sum += 2 * c;
            c = 0;
            y = 0;
        }
        else
        {
            sum += c * 2;
            y -= c;
            c = 0;
        }
        z-=min(a,z);
        a-=min(a,z);
        c-=min(c,z);
        z-=min(c,z);
    }
    return 0;
}