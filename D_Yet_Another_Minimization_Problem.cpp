#include<bits/stdc++.h>
#define int long long int
using namespace std;
int sum(vector<int> arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            ans+=(arr[i]+arr[j])*(arr[i]+arr[j]);
        }
    }
    return ans;
}
int fun(int i,vector<int> a,vector<int> b,int ch,vector<vector<int>> dp)
{
    
    if(i==a.size())
    {
        return sum(a)+sum(b);
    }
    if(dp[i][ch]!=-1)
    {
        cout<<"hey"<<endl;
        return dp[i][ch];
    }
    int ans=1e9;
    dp[i][1]=fun(i+1,a,b,1,dp);
    swap(a[i],b[i]);
    dp[i][0]=fun(i+1,a,b,0,dp);
    int l=0;
    if(dp[i][0]>dp[i][1])
    {
        l=1;
    }
    
    return dp[i][l];
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
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<vector<int>> dp(n,vector<int>(2,-1));
        cout<<fun(0,a,b,-1,dp)<<endl;
        
        
    }
return 0;
}