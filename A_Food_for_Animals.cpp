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
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a<x)
        {
            if(c>=(x-a))
            {
                c-=(x-a);
                a+=(x-a);
                 
            }
            else
            {
                a+=c;
                c=0;
            }
           
        }
       
        if(b<y)
        {
            if(c>=(y-b))
            {
                 c-=(y-b);
                b+=(y-b);
               
            }
            else
            {
                b+=c;
                c=0;
            }
        }
        if(b>=y && a>=x)
        yes
        else
        no
    }
return 0;
}