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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=c && c<=b)
        {
            if(c<=a && a<=d)
            {
                cout<<min(a,c)<<endl;
            }
            else
            cout<<c<<endl;
        }
        else if(c<=a && a<=d)
        {
            if(a<=c && c<=b)
            {
                cout<<min(a,c)<<endl;
            }
            else
            cout<<a<<endl;
        }
        else
        {
            cout<<a+c<<endl;
        }
    }
return 0;
}