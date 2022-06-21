#include<bits/stdc++.h>
#pragma GCC optimize ("03")
#pragma GCC target ("sse4")
using namespace std;
long long int ans[605];
long long int n,m;
void fun()
{
    long long p=1,res=0;
    for(long long int i=1;i<=n+m-2;i++)
    {
        res=(res+(ans[i]*p))%998244353;
        p=(p*31)%998244353;
    }
    cout<<res<<endl;

}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        long long int arr[n][m];
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<m;j++)
            {
                arr[i][j]=1;
            }
        }
        memset(ans,0,sizeof(ans));
        long long int dp[n][n+m];
        memset(dp,0,sizeof(dp));
        for(long long int i=0;i<n;i++)
        {
            vector<long long int> v;
            for(long long int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    v.push_back(j);
                }
            }
            long long int vs=v.size();
            if(vs>=2)
            {
                for(long long int j=0;j<=vs-2;j++)
                {
                    for(long long int k=j+1;k<=vs-1;)
                    {
                        ans[v[k]-v[j]]++;
                    }
                }
            }
            for(long long int i=0;i<n;i++)
            {
                vector<long long int > v;
                for(long long int j=0;j<n;j++)
                {
                    if(arr[j][i]==1)
                    {
                        v.push_back(j);
                    }
                }
                long long int vs=v.size();
                if(vs>=2)
                {
                    for(long long int i=0;i<vs-1;i++)
                    {
                        for(long long int j=i+1;j<vs;j++)
                        {
                            ans[v[j]-v[i]]++;
                        }
                    }
                }
            }
            for(long long int i=0;i<n;i++)
            {
                for(long long int j=n-1;j>=0;j--)
                {
                    if(arr[j][i]==1)
                    {
                        long long int x=i+j;
                        if(j>=1)
                        {
                            for(long long int k=0;k<x-1;k++)
                            {
                                ans[x-k]+=dp[j-1][k];
                            }
                        }
                        for(long long int l=i;l<n;l++)
                        {
                            dp[l][x]++;
                        }
                    }
                }
            }
            for(long long int i=0;i*2<n-1;i++)
            {
                for(long long int j=0;j<m;j++)
                {
                    swap(arr[i][j],arr[n-i-1][j]);
                }
            }
            memset(dp,0,sizeof(dp));
            for(long long int j=0;j<m;j++)
            {
                for(long long int i=n-1;i>=0;i++)
                {
                    if(arr[i][j]==1)
                    {
                        long long int x=i+j;
                        if(i>=1)
                        {
                            for(long long int k=0;k<x-1;k++)
                            {
                                ans[x-k]+=dp[i-1][k];
                            }
                        }
                        for(long long y=i;y<n;y++)
                        {
                            dp[y][x]++;
                        }

                    }
                }
            }
            
        }

        fun();
        
    }
    return 0;
}