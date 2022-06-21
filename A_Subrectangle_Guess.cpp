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
        int n,mm;
        cin>>n>>mm;
        vector<vector<int>> arr(n,vector<int>(mm));
        int x,y,m=-9999999999999999999999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mm;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]>m)
                {
                    x=i;
                    y=j;
                    m=arr[i][j];
                }
            }
        }
        x++;
        y++;
        if(x<=n/2)
        {
            x=n-x;
            x++;
            
        }
        if(y<=mm/2)
        {
            y=mm-y;
            y++;
            
        }
       
        cout<<x*y<<endl;
    }
return 0;
}