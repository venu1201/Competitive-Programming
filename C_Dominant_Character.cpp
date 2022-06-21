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
        int n;
        cin>>n;
        string str;
        cin>>str;
        int m=9999999999999,flag=0,sum=0,x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='a' && flag==0)
            {
                flag=1;
                continue;
            }
            if(flag==1 && str[i]=='a')
            {
                m=min(m,sum);
            }
            else
            {
                if(str[i]=='b')
                x++;
                if(str[i]=='c')
                y++;
                
            }
        }
    }
return 0;
}