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
        map<int,int>mp;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(i);
        }
        int check=0;
        int k=0;
        for(auto it:mp)
        {
            if(it.second==1)
                {
                    check=1;
                    break;
                }
                else
                {
                    for(int i=k;i<k+it.second;i++)
                    {
                        swap(ans[i],ans[k+it.second-1]);
                    }
                }
                k+=it.second;
        }
        if(check==1)
            {
                cout<<-1<<endl;
                continue;
            }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}