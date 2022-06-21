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
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(a>b)
        {
            int ans=(a-b)/2;
            if((a-b)%2==1)
            {
                ans+=2;
            }
            cout<<ans<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }
return 0;
}