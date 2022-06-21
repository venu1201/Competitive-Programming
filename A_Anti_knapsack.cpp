#include<bits/stdc++.h>
#define int long long int
using namespace std;
    int m(int k, vector<vector<int>>& arr) {
        set<pair<int,int>> st;
        int n=arr.size();
        vector<int> g[k];
        for(int i=0;i<n;i++)
        {
            g[arr[i][0]].push_back(arr[i][1]);
            g[arr[i][1]].push_back(arr[i][0]);
            st.insert(make_pair(arr[i][0],arr[i][1]));
        }
        
        vector<int> vis(k,0);
        int cnt=0;
        queue<int> q;
        q.push(0);
        while(q.empty()!=true)
        {
            int x=q.front();
            q.pop();
            if(vis[x]==0)
            {
                vis[x]=1;
                for(int i=0;i<g[x].size();i++)
                {
                    q.push(g[x][i]);
                    if(vis[g[x][i]]==0 && st.count(make_pair(x,g[x][i])))
                    {
                        cnt++;
                    }
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
    vector<vector<int>> arr={{0,1},{1,3},{2,3},{4,0},{4,5}};
    int ans=m(6,arr);
    cout<<ans<<endl;
    
return 0;
}