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
        int x=3*(n-1);
        int y=n-2;
        if(y%2==1)
        {
            y=y/2;
            y++;
            y=3*y;
            cout<<x-y<<endl;
        }
        else
        {
            y=y/2;
            y=3*y;
            cout<<x-y<<endl;
        }
    }
return 0;
}