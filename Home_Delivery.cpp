#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N=1e4+1;
vector<int> g[N];
bool vis[N];
int check[N];
int cnt=1;
void dfs(int v)
{
    vis[v]=true;
    check[v]=cnt;
    for(auto c:g[v])
    {
        if(vis[c]==false)
        dfs(c);
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
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int q;
        cin>>q;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==1)
            {
                continue;
            }
            dfs(i);
            cnt++;

        }
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            
            if(check[x]==check[y])
            {
                cout<<"YO"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
return 0;
}