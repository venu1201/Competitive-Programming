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
        int n,x;
        cin>>n>>x;
        int ch=1;
        for(int i=1;i<=n;i++)
        {
            if(x%i==0)
            {
                int cnt=x/i;
                if(cnt<=n-i)
                {
                    ch=0;
                    break;
                }
            }
        }
        if(ch==1)
        {
            no
        }
        else
        yes
    }
return 0;
}