#include<bits/stdc++.h>
#define int long long int
using namespace std;
void dfs(int v,vector<int>& vis,vector<vector<char>>arr,vector<int> g[])
    {
        vis[v]=1;
        for(auto child:g[v])
        {
            if(vis[child]==1)continue;
            dfs(child,vis,arr,g);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<int> g[grid.size()];
        int n=grid.size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        vector<int> vis(n);
        
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,vis,grid,g);
                cnt++;
            }
        }
        return cnt;
    }
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    vector<vector<char>> arr={{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}};
    cout<<numIslands(arr);

return 0;
}