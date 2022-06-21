#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr;
        map<pair<int,int>,int> mp;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            arr.push_back(make_pair(a[i],b[i]));
            mp[arr[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            pair<int,int> p=make_pair(arr[i].second,arr[i].first);
            if(arr[i].first!=arr[i].second)
            {
                ans+=mp[p];
                mp[arr[i]]--;
            }
            else
            {
                if(mp[p]>0)
                {
                    ans+=mp[p]-1;
                    mp[arr[i]]--;
                }
            }

        }
        cout<<ans<<endl;

    }
return 0;
}