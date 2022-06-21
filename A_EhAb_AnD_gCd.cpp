#include<bits/stdc++.h>
#define int long long int
using namespace std;
bool dfs(int s,int d,vector<int> vis,vector<int> g[])
    {
        vis[s]=1;
        bool ans=false;
        if(s==d)
        {
            ans=true;
        }
        for(int child : g[s])
        {
            if(vis[child]==1)
            {
                continue;
            }
            dfs(child,d,vis,g);
        }
        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> g[n];
        for(int i=0;i<edges.size();i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n);
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        return dfs(source,destination,vis,g);
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
        int n;
        cin>>n;
        vector<vector<int>> arr;
        for(int i=0;i<n-1;i++)
        {
            vector<int> t;
            int x,y;
            cin>>x>>y;
            t.push_back(x);
            t.push_back(y);
            arr.push_back(t);
        }
        int s,d;
        cin>>s>>d;
        bool x=validPath(n,arr,s,d);
        cout<<x<<endl;
    }
return 0;
}
