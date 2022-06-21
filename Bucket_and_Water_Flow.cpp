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
        for(int i=0;i<d;i++)
        {
            if(a>b)
            {
                break;
            }
            a+=c;
        }
        if(a==b)
        cout<<"filled"<<endl;
        else if(a>b)
        {
            cout<<"overFlow"<<endl;
        }
        else
        cout<<"Unfilled"<<endl;

    }
return 0;
}