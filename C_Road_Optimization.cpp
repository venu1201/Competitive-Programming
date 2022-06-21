#include<bits/stdc++.h>
#define int long long int
using namespace std;
int fun(int x,int k,vector<int>& a,vector<int>& b,vector<vector<int>>& dp)
{
    if(x>=b.size())
    {
        return 0;
    }
    if(dp[x][k]!=-1)
    {
        return dp[x][k];
    }
    int ans=999999999999999999;
    for(int i=0;i<=k;i++)
    {
        if(i+x>=b.size())
        {
            break;
        }
        int y=(a[x+1+i]-a[x])*b[x];
        ans=min(ans,y+fun((x+1+i),(k-i),a,b,dp));
    }
    return dp[x][k]=ans;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    T=1;
    while(T--)
    {
        int n,l,k;
        cin>>n>>l>>k;
        vector<int> a(n),b(n);
        vector<vector<int>> dp;
        for(int i=0;i<505;i++)
        {
            vector<int> t;
            for(int j=0;j<505;j++)
            {
                t.push_back(-1);
            }
            dp.push_back(t);
        }
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a.push_back(l);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        cout<<fun(0,k,a,b,dp);
    }
return 0;
}