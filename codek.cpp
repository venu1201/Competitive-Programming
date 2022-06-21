#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    int t;
    cin>>t;
    vector<vector<int>> arr(n,vector<int>(m));
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++ )
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(x!=i || y!=j)
            {
                int d=abs(i-x)+abs(j-y);
               
                d=d*2+1;
                if(d<=t)
                    a.push_back(make_pair(arr[i][j],d));
            }
        }
    }
   
    vector<vector<int>> dp((int)a.size()+1, vector<int>(t + 1));
  
    for(int i = 0; i <= (int)a.size(); i++)
    {
        for(int j = 0; j <= t; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i - 1].second <= j)
                dp[i][j] = max(a[i - 1].first + 
                                dp[i - 1][j - a[i - 1].second],
                                dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout<<dp[(int)a.size()][t];
return 0;
}