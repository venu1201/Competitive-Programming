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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b+c || b==a+c || c==a+b)
        {
            cout<<"YES"<<endl;
        }
        else if((a==b && c%2==0) || (b==c && a%2==0) || (a==c && b%2==0))
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