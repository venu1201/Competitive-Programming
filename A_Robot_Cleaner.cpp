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
        int n,m,a,b,x,y,cnt=0;
        cin>>n>>m>>a>>b>>x>>y;
        int dr=1,dc=1;
        if(a==x || b==y)
        {
            cout<<0<<endl;
        }
        else if(a>x && b<y)
        {
            cout<<y-b<<endl;
        }
        else if(a<x && b<y)
        {
            cout<<min(abs(a-x),abs(b-y))<<endl;
        }
        else if(a>x && b>y)
        {
            cout<<(((m-b)*2)+(b-y))<<endl;
        }
        else
        {
            cout<<min(abs(a-x),abs(b-y))<<endl;
        }
        
        
    }
return 0;
}