#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int k,n;
    cin>>k>>n;
    vector<int> arr(n);
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=k;i++)
    {
        dp[0][k]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(arr[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
            }
        }
    }
   
    cout<<dp[n][k]<<endl;

return 0;
}