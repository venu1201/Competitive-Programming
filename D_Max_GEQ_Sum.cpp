#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=arr[0];
        int check=1;
        int mx=arr[0];
        for(int i=1;i<n;i++)
        {
            int x=ans+arr[i];
            if(x<arr[i])
            {
                ans=arr[i];
                mx=-9999999999999999;
            }
            else
            {
                ans=x;
            }
            mx=max(mx,arr[i]);
            if(ans>mx)
            {
                check=0;
                break;
            }
        }
        if(check==1)
            yes
        else
            no
    }
return 0;
}