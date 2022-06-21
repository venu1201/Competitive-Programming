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
        int a,b,m;
        cin>>a>>b>>m;
        int x=abs(b-a);
        int y=abs(m-x);
        if(x>=y)
            cout<<y<<endl;
        else
        cout<<x<<endl;
    }
return 0;
}