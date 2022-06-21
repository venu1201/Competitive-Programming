#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
int fun(int x,int y)
{
    
    if(y==0)
    {
        return 1;

    }
    else
    {
        return x*fun(x,y-1);
    }
}
int pow(int x,int y)
{
    int ans=1;
    for(int i=0;i<y;i++)
    {
        ans=ans*x;
    }
    return ans;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    cout<<fun(3,9)<<endl;
    cout<<f(3,9)<<endl;
return 0;
}