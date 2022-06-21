#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
int ans=0;
vector<pair<int,int>> a;
void fun(int i,vector<int> g[],vector<int> &vis,int x,int y,string &str)
{
    
    if(vis[i]!=-1)
        return;
    vis[i]=1;
    for(int it:g[i])
    {
        fun(it,g,vis,x,y,str);

    }
    cout<<i<<" "<<str[i-1]<<endl;
    if(str[i-1]=='B')
    {
        x++;
    }
    else
    {
        y++;
    }
    a[i-1].first+=x;
    a[i-1].second+=y;
   

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
        vector<int> g[n];
        for(int i=2;i<=n;i++)
        {
            int x;
            cin>>x;
            g[i].push_back(x);
            g[x].push_back(i);
        }
        string str;
        cin>>str;
        vector<int> vis(n,-1);
        for(int i=0;i<=n;i++)
        {
            a.push_back(make_pair(0,0));
        }
        fun(1,g,vis,0,0,str);
        for(auto it:a)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        cout<<ans<<endl;

    }
return 0;
}