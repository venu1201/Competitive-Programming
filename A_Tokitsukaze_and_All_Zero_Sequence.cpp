#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
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
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if(arr[i]==0)
            {
                x=1;
            }
            if(mp[arr[i]]>1)
            {
                y=1;
            }
        }
        if(x==1)
        {
            cout<<n-mp[0]<<endl;
        }
        else if(y==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n+1<<endl;
        }

    }
return 0;
}