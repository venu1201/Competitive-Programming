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
        if(a==0 && b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a==0 && b%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(a%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(a%2==0)
        {
            cout<<"YES"<<endl;
        }
    }
return 0;
}