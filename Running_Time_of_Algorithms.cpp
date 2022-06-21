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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        int x=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>x)
            {
                cnt++;
                swap(arr[j],arr[j+1]);
            }
            else
            break;
        }
    }
    cout<<cnt<<endl;
return 0;
}