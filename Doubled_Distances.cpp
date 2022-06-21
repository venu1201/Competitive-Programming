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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int h=1;
        for(int i=1;i<n-1;i++)
        {
            if(3*arr[i]!=2*arr[i+1]+arr[i-1] && 3*arr[i]!=arr[i+1]+2*arr[i-1])
            {
                h=0;
                no
                break;
            }
        }
        if(h==1)
            yes
    }
    return 0;
}