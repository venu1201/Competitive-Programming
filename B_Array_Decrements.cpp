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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int ch=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                ch=1;
                break;
            }
        }
        if(ch==1)
        {
            no
        }
        else if(count(b.begin(),b.end(),0)==n)
        {
            yes
        }
        else
        {
            int d=0;
            for(int i=0;i<n;i++)
            {
                if(b[i]!=0)
                {
                    d=a[i]-b[i];
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]-b[i]==d)
                {
                    continue;
                }
                else if(b[i]==0 && a[i]-b[i]<=d)
                {
                    continue;
                }
                else
                {
                    ch=1;
                    break;
                }
            }
            if(ch==1)
                no
            else
                yes
        }
    }
return 0;
}