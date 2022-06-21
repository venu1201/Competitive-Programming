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
        string str;
        cin >> str;
        vector<int> arr;
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            x++;
            if(str[i]!=str[i+1])
            {
                arr.push_back(x);
                x=0;
            }
        }

        if(n>1)
        {
            if(str[n-1]==str[n-2])
            {
                arr.push_back(x+1);
            }
            else
            {
                arr.push_back(1);
            }
        }
        if(arr.size()==1)
        {
            if(arr[0]%2==0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            continue;

        }
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {

            }
            else
            {
                
                arr[i]++;
                ans++;
                if(i+1<arr.size())
                {
                    arr[i+1]=abs(arr[i+1]-1);
                }
            }
            
        }
        cout<<ans<<endl;

    }
    return 0;
}