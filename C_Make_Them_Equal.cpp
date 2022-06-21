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
        char ch;
        cin>>ch;
        string str;
        cin>>str;
        int odd=0,even=0;
        int h=-1,hh=-1;
        for(int i=0;i<n;i++)
        {
            if(str[i]!=ch)
            {
                if((i+1)%2==0)
                {
                even++;
                hh=i+1;
                }
                else
                {
                odd++;
                h=i+1;
                }
            }

        }
        if(odd==0 && even==0)
        cout<<0<<endl;
        else if(odd!=0 && even==0)
        {
            cout<<1<<endl;
            cout<<2<<endl;
        }
        else if(odd==0 && even!=0)
        {
            cout<<1<<endl;
            if(hh==1)
            cout<<hh+1<<endl;
            else
            cout<<hh-1<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<hh<<" "<<hh-1<<endl;
        }

    }
return 0;
}