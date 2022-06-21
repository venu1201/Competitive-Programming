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
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> res(n,0);
    int mod=1e9+7;
    while(m--)
    {
        int x,c ;
        cin>>x>>c ;
        
        for(int i=0;i<c;i++)
        {
            int cnt,y;
            cin>>cnt>>y;
            arr[y-1]=(arr[y-1]%mod +((cnt%mod)*(arr[x-1])%mod)%mod)%mod;
        }
        arr[x-1]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}