#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    T=1;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);
        }
        vector<int> p(t.size());
        p[0]=mp[t[0]][0];
        p[t.size()-1]=mp[t[t.size()-1]][mp[t[t.size()-1]].size()-1];
        for(int i=1;i<t.size()-1;i++)
        {
            p[i]=mp[t[i]][mp[t[i]].size()-1];
            p[i+1]=mp[t[i+1]][0];
            int x=1;
            while((p[i]<=p[i-1] || p[i]>=p[i+1]) && mp[t[i]].size()-1-x>=0)
            {
                p[i]=mp[t[i]][mp[t[i]].size()-1-x];
                x++;
            }
        }
        int maxi=-1;
        for(int i=1;i<p.size();i++)
        {
            maxi=max(maxi,abs(p[i]-p[i-1]));
        }
        cout<<maxi<<endl;
    }
return 0;
}