#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool vis[N];
vector<int> graph[N];
int count=0;
void dfs(int x)
{
    if(vis[x]==true)
    {
        return;
    }
    vis[x]=true;
    for( int it:graph[x])
    {
        dfs(it);
    }
}
int main()
{
     int n,v;
    cin>>n>>v;
    
    for( int i=0;i<v;i++)
    {
         int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
   
    for( int i=1;i<=n;i++)
    {
        if(vis[i]==true)
        {
            continue;
        }
        dfs(i);
        ::count++;
    }
    cout<<::count<<endl;
    return 0;

}