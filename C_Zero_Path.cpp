#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
bool fun(vector<vector<int>> &arr,int x,int y,vector<vector<int>> &dp,int sum)
{
    
    if(x==0 && y==0)
    {
        int x=sum+arr[0][0];
        if(x==0)
        return true;
        return false;
    }
    if(x<0 || x>=arr.size() || y<0 || y>=arr[0].size())
    {
        return false;
    }
    if(dp[x][y]!=-1)
    {
        
        return dp[x][y];
    }
    bool ans=false;
    if(x>0)
    {
        ans=ans||fun(arr,x-1,y,dp,sum+arr[x][y]);
    }
    if(y>0)
    {
        ans=ans||fun(arr,x,y-1,dp,sum+arr[x][y]);
    }
    
    return dp[x][y]= ans;

}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        vector<vector<int>> dp(n,vector<int>(m,-1));
        if(fun(arr,n-1,m-1,dp,0)==1)yes
        else no
    }
return 0;
}