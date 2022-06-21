#include<bits/stdc++.h>
#define int long long int
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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            cout<<it.first<<" ";
            mp[it.first]--;
        }
        for(auto it:mp)
        {
            if(it.second>=1)
            {
                for(int i=0;i<it.second;i++)
                {
                    cout<<it.first<<" ";
                }
            }
        }cout<<endl;
        
    }
return 0;
}