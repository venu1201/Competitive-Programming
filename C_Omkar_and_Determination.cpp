#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    
    
        int n,m;
        cin>>n>>m;
        vector<string> arr(n);
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            for(int j=0;j<arr[i].size();j++)
            {
                if(i==0||j==0)
                {
                    if(arr[i][j]=='X')
                    {
                        dp[i][j]=0;
                    }
                    else
                    {
                        dp[i][j]=1;
                    }
                }
                else if(arr[i][j]=='X')
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(dp[i][j]==-1)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            int x1,x2;
            cin>>x1>>x2;
            int ans=0;
            for(int i=x1-1;i<x2;i++)
            {
                cout<<0<<" "<<i<<endl;
                cout<<dp[0][i]<<" ";
                if(dp[0][i]==1)
                {
                    ans=1;
                    break;
                }
            }cout<<endl;
            if(ans==0)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<i<<" "<<x1-1<<endl;
                    if(dp[i][x1-1]==1)
                    {
                        ans=1;
                        break;
                    }
                }
            }
           
            if(ans==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
        
        
    
return 0;
}