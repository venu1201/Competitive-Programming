#include<bits/stdc++.h>
using namespace std;
int ans=1;
int res(int x,vector<int> arr,int k,vector<int> &dp)
{
    if(x==arr.size()-1)
    {

        return dp[x]=arr[x];
    }
    if(dp[x]!=-1)
    {
        return dp[x];
    }
    
    lo cost=99999999;
    for(int i=1;i<=k;i++)
    {
    if(x+i<arr.size())
    {
        
         cost=min((arr[x]*res(x+i,arr,k,dp))%1000000007,cost);
         
    }
    }
    return dp[x]=cost%1000000007;
    

}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ::ans=ans*arr[i];
    }
    vector<int> dp;
    for(int i=0;i<n;i++)
    {
       dp.push_back(-1);
    }
    res(0,arr,k,dp);
    
    cout<<dp[0]<<endl;
return 0;
}