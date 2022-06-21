#include<bits/stdc++.h>
#define int long long int
using namespace std;
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
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x].push_back(i);      
        }
        int d=99999999999999,x=0,y=0;
        for(auto it:mp)
        {
            for(int i=0;i<it.second.size()-1;i++)
            {
                if(d>abs(it.second[i]-it.second[i+1]))
                {
                    d=abs(it.second[i]-it.second[i+1]);
                    x=it.second[i];
                    y=it.second[i+1];
                }
            }
        }
        if(x==y)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<n-(y-x)<<endl;
    }
return 0;
}