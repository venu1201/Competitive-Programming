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
        int a,b;
        cin>>a>>b;
        if((a%2==0 && b%2==0) ||(a%2==1 && b%2==1))
        {
            if(a>=b)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<b-a<<endl;
            }
        }
        else if((a%2==1 && b%2==0) || (a%2==0 && b%2==1))
        {
            if(a>=b)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<b-a<<endl;    
            }
        }
    }
    return 0;
}