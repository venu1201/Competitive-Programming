#include<bits/stdc++.h>

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
   
        unsigned long long int n;
        cin>>n;
        vector<unsigned long long int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        unsigned long long int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x=arr[i]^arr[j];
                x=2*x;
                if(x==arr[i]+arr[j])
                {
                    
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    
return 0;
}