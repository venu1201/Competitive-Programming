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
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        vector<int> m;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                m.push_back(i);
            }
        }
        auto it = upper_bound(arr.begin(), arr.end(), n);
        if (it == arr.end() && m.size() != 0)
        {
            cout << "NO" << endl;
        }
        else if (it == arr.end() && m.size() == 0)
        {
            cout << "YES"
                 << " " << n + 1 << endl;
        }
        else
        {
            int y = it - arr.begin();

            int ans=-1;
            for (int i = 0; i < m.size(); i++)
            {
                int check = 0;
                int x=arr[y]-m[i];
                if(x<n)
                {
                    break;
                }
                for (int i = y; i < n; i++)
                {
                    if (mp[arr[i] % x] != 0)
                    {
                        check = 1;
                        break;
                    }
                }
                if(check==0)
                {
                    cout << "YES"<< " " << x << endl;
                    ans=1;
                    break;
                }
            }
            if(ans==-1)
            {
                cout<<"NO"<<endl;
            }
            
        }
    }
    return 0;
}