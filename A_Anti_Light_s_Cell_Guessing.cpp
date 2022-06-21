#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a==1 && b==1)
        {
            cout<<0<<endl;
        }
        else if(a==1 || b==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
return 0;
}