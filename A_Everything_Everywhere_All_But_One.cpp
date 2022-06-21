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
        vector<double> arr;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            double x;
            cin>>x;
            arr.push_back(x);
            sum+=x;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            double check=(double)(sum-arr[i])/double(n-1);
            if(check==arr[i])
                {
                    k=1;
                    break;
                }
        }
        if(k==1)
            yes
        else
            no
    }
return 0;
}