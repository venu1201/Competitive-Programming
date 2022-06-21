#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<vector<int>> brr=arr;
        for(int i=0;i<brr.size();i++)
        {
            sort(brr[i].begin(),brr[i].end());
        }
        int check=0;
        vector<int> swap;
        for(int i=0;i<n;i++)
        {
            vector<int> x;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!=brr[i][j])
                {
                    x.push_back(j);
                }
            }
            if(x.size()>2)
            {
                check=1;
                break;
            }
            else if(swap.size()!=2 && x.size()==2)
            {
                swap=x;
            }
        }
        if(check==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(swap.size()==0)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            int x=swap[0],y=swap[1];
            int t=arr[i][x];
            arr[i][x]=arr[i][y];
            arr[i][y]=t;
        }
        int h=0;
        for(int i=0;i<n;i++)
        {
            h=0;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!=brr[i][j])
                {
                    h=1;
                    break;
                }
            }
            if(h==1)
                break;
        }
        if(h==1)
        cout<<-1<<endl;
        else
        {
            cout<<swap[0]+1<<" "<<swap[1]+1<<endl;
        }
    }
return 0;
}