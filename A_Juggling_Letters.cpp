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
        int sum=0;
        for(auto it:mp)
        {
            if(it.first==0)
            {
                sum+=1;
                continue;
            }
            if(it.second>=2)
            {
                sum+=2;
            }
            else
            {
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}