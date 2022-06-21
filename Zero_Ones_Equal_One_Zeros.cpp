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
        if(n==3)
        {
            cout<<"010"<<endl;
        }
        else if(n==4)
        {
            cout<<"1001"<<endl;
        }
        else
        {
            if(n%2==1)
            {
                string ans="";
                for(int i=0;i<n;i++)
                {
                    if(i==n/2)
                    {
                        ans+='1';
                    }
                    else
                    {
                        ans+='0';
                    }
                }
                cout<<ans<<endl;
            }
            else
            {
                string ans="";
                for(int i=0;i<n;i++)
                {
                    if(i==n/2 || i==n/2 -1)
                    {
                        ans+='1';
                    }
                    else
                    {
                        ans+='0';
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
return 0;
}