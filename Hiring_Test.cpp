#include<bits/stdc++.h>
#define int long long int
using namespace std;
int fun(vector<int> a,vector<int> b)
{
    vector<int> g[a.size()+1];
    
    for(int i=0;i<a.size();i++)
    {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    int cnt=0;
    vector<int> vis(a.size()+1);
    for(int i=0;i<a.size()+1;i++)
    {
        vis[i]=0;
    }
    for(int i=0;i<a.size()+1;i++)
    {
        cout<<vis[i]<<" ";
    }cout<<endl;
    for(int i=1;i<=a.size()+1;i++)
    {
        vis[i]=1;
        for(auto x:vis)
        {
            cout<<x<<" ";
        }cout<<endl;
        for(int it:g[i])
        {
            if(vis[it]==0)
            {
                cnt+=it;
            }
        }
    }
    return cnt;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    vector<int> a={1,2,3};
    vector<int> b={4,1,2};
    cout<<fun(a,b);
return 0;
}