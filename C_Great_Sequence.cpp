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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            while(mp[it.first]!=0)
            {
                if(mp[it.first*x]==0)
                {
                    cnt++;
                }
                else
                {
                    mp[it.first*x]--;
                }
                mp[it.first]--;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}