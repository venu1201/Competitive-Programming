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
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[(n/2)+i]);
        }
        if(n%2==1)
            ans.push_back(arr[n-1]);
        int check=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(ans[i]>ans[n-1] && ans[i]>ans[i+1])
                    continue;
                else if(ans[i]<ans[n-1] && ans[i]<ans[i+1])
                    continue;
                else
                    check=1;
                    break;
            }
            else if(i==n-1)
            {
                if(ans[n-1]>ans[0] && ans[n-1]>ans[n-2])
                    continue;
                else if(ans[n-1]<ans[0] && ans[n-1]<ans[n-2])
                    continue;
                else
                    check=1;
                    break;
            }
            else
            {
                if(ans[i]>ans[i-1] && ans[i]>ans[i+1])
                    continue;
                else if(ans[i]<ans[i-1] && ans[i]<ans[i+1])
                    continue;
                else
                    check=1;
                    break;
            }
        }
        if(check)
            no
        else
        {
            yes
            for(auto it:ans)
            {
                cout<<it<<" ";
            }cout<<endl;
        }
            
    }
return 0;
}