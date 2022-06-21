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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++)
        {
            arr[i]+=arr[i-1];
        }
        int j=n-1;
        int sum=0,s=0;
        int k=0;
        while(j>=0)
        {
            if(arr[j]+s*(j+1)<=x)
            {
                int l=x-(arr[j]+s*(j+1));
                l=l/(j+1);
                l++;
                sum+=l*(j+1);
                s+=l;

            }
            j--;
        }
        cout<<sum<<endl;
    }
return 0;
}