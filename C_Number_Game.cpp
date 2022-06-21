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
        int n;
        cin>>n;
        string b="FastestFinger";
        string a="Ashishgup";
        int x=log2(n);
        if(n==1)
        {
            cout<<b<<endl;
        }
        else if(n==2)
        {
            cout<<a<<endl;
        }
        else if(n%2==1)
        {
            cout<<a<<endl;
        }
        else if(pow(2,x)==n)
        {
            cout<<b<<endl;
        }
        else if(n==6)
        {
            cout<<b<<endl;
        }
        else if(n%6==0)
        {
            cout<<a<<endl;
        }
        else if((n/2)%2==1)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }

    }
return 0;
}