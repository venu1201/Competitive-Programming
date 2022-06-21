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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    while (q--)
    {
        int t;
        cin >> t;
        int a,b;
        if (t == 0)
        {
            int l, r, x;
            cin >> l >> r >> x;
            a=l,b=r;
            if (x == 1)
            {
                for (int i = l - 1; i < r; i++)
                {
                    if (arr[i] != 1 && arr[i] != 2)
                        arr[i] = -1;
                }
            }
            else
            {
                for (int i = l - 1; i < r; i++)
                {
                    arr[i] = 1;
                }
            }
            
        }
        if (count(arr.begin()+a-1, arr.end()+b, -1) == 1)
                {
                    for (int i = a-1; i < b; i++)
                    {
                        if (arr[i] == -1)
                        {
                            arr[i] = 2;
                        }
                    }
                }
        if(count(arr.begin(),arr.end(),-1)==1)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]==-1)
                {
                    arr[i]=2;
                }
            }
        }
        if (t == 1)
        {
            int j;
            cin >> j;
            j--;
            if (arr[j] == -1 || arr[j] == 0)
            {
                cout << "N/A" << endl;
            }
            else if (arr[j] == 1)
            {
                cout << "NO" << endl;
            }
            else if (arr[j] == 2)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}