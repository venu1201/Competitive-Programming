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
        int x=-99999999;
        int a=-99999999,b=-99999999;
        if(n%4==0)
        {
            a=n/4;
        }
        if(n%6==0)
        {
            b=n/6;
        }
        if(n<4)
        {
            cout<<-1<<endl;
        }
        else if(a==x && b==x)
        {
            cout<<-1<<endl;
        }
        else if(a==x && b!=x)
        {
            cout<<b<<" "<<b<<endl;
        }
        else if(a!=x && b==x)
        {
            cout<<a<<" "<<a<<endl;
        }
        else
        {
            cout<<min(a,b)<<" "<<max(a,b)<<endl;
        }
    }
return 0;
}