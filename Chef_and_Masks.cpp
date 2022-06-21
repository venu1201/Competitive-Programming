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
        int x,y;
        cin>>x>>y;
        x=x*10;
        if(x==y)
        {
            cout<<"Cloth"<<endl;
        }
        else if(x>y)
        {
            cout<<"Cloth"<<endl;
        }
        else
            cout<<"Disposable"<<endl;
    }
return 0;
}