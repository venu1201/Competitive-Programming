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
        double a,b,c;
        cin>>a>>b>>c;
        double x=(2*b-c)/a,y=(2*b-a)/c,z=(a+c)/(2*b);
        a=(int)(a);
        b=(int)(b);
        c=(int)(c);
        int x1=(2*b-c)/a,y1=(2*b-a)/c,z1=(a+c)/(2*b);
       
        if((x1==x && x1>0) || (y1==y && y1>0) || (z1==z && z1>0) )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
return 0;
}