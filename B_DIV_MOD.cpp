#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
int fun(int l,int r,int a)
{
    
    int ans = r/a+r%a;
    int rr = r-(r%a)-1;
    if(rr>=l){
    ans = max(ans,rr/a+rr%a);
    }
    return ans;

}
int fun1(int l,int r,int a)
{
    
        int x=-1;
        if(l<a && r>=a)
        {
            x=a-1;
        }
        if(a==1)
        {
            return r;
        }
        if(r%a!=0)
        {
            int c=r%a;
            int y=r-c;
            y--;
            int aa=-1;
            if(l<=y && r>=y)
                aa=(y/a)+(y%a);
            int ans=(r/a)+(r%a);
            return max({ans,x,aa});
        }
        else
        {
            if(l==r)
            {
                int ans=(r/a)+(r%a);
                return max(ans,x);
            }
            else
            {
                r--;
                int ans=(r/a)+(r%a);
                return max(ans,x);
            }
        }
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int T=1e6;
    while(T--)
    {
        
        int l=rand();
        int r=rand();
        int a=rand();
        int mod=1e9+1;
        r=r%mod;
        l=l%r;
        a=r%mod;
        if(l==0)
        {
            l++;
        }
        if(r==0)
        {
            r++;
        }
        if(a==0)
        {
            a++;
        }
        l=10 ,r=27,a=1;
        
        if(fun(l,r,a)!=fun1(l,r,a))
        {
            cout<<fun(l,r,a)<<endl;
            cout<<fun1(l,r,a)<<endl;
            cout<<l<<" "<<r<<" "<<a<<endl;
            break;
        }
    }
return 0;
}