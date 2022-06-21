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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=max(a,b);
        int y=max(c,d);
        if(x==y)
            cout<<"TIE"<<endl;
        else if(x>y)
        {
            cout<<"Q"<<endl;
        }
        else
        cout<<"P"<<endl;
    }
return 0;
}