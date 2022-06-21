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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x-i]++;
        }
        int sum=0;
        for(auto it:mp)
        {
            
            sum+=((it.second-1)*(it.second))/2;
        }
        cout<<sum<<endl;
    }
return 0;
}