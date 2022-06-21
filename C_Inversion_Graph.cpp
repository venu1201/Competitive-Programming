#include<bits/stdc++.h>
#define int long long int
using namespace std;
void dfs(int v,vector<int> g[],vector<int>&vis)
{
    if(vis[v]==0)
    {
        return;
    }
    vis[v]=0;
    for(int child:g[v])
    {
        if(vis[child]==0)
        {
            continue;
        }
        dfs(child,g,vis);
    }
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> g[n+1];
        int m=arr[0],x=0;
        for(int i=0;i<n;i++)
        {
            for()
        }
        for(auto it:arr)
        {
            cout<<it<<" :";
            for(int child:g[it])
            {
                cout<<child<<" ";
            }cout<<endl;
        }
        vector<int> vis(n+1,-1);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(vis[arr[i]]==-1)
            {
                ans++;
                dfs(arr[i],g,vis);
            }
        }
        
        cout<<ans<<endl;
    }
return 0;
}