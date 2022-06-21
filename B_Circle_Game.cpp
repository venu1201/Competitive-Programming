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
        if(n%2==1)
        {
            cout<<"Mike"<<endl;
        }
        else
        {
            int m=*min_element(arr.begin(),arr.end());
            int ans;
            for(int i=0;i<n;i++)
            {
                if(arr[i]-m==0)
                {
                    ans=i;
                    break;
                }
            }
            ans++;
            if(ans%2==1)
            {
                cout<<"Joe"<<endl; 
               
            }
            else
            {
                cout<<"Mike"<<endl;
            }
        }
    }
return 0;
}