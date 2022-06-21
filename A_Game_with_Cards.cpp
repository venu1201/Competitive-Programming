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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m;
        cin>>m;
        vector<int> brr(m);
        for(int i=0;i<m;i++)
        {
            cin>>brr[i];
        }
        int a=*max_element(arr.begin(),arr.end());
        int b=*max_element(brr.begin(),brr.end());
        if(a==b)
        {
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
        else if(a>b)
        {
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
    }
return 0;
}