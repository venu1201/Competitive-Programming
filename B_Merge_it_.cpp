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
            arr[i]=arr[i]%3;
            mp[arr[i]]++;
        }
        int sum=mp[0];
        int x=min(mp[2],mp[1]);
        mp[2]-=x;
        mp[1]-=x;
        sum+=x+mp[2]/3 + mp[1]/3;
        cout<<sum<<endl;

    }
return 0;
}