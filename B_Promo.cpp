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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    
    
    while (k--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<arr[x-1]<<endl;
            continue;
        }
        
        
        
        cout<<arr[x-1]-arr[x-y-1] <<endl;
        

    }
    
return 0;
}