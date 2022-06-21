#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int x=ceil(b/2)+1;
        if(x>=a)
        {
            cout<<b%x<<endl;
        }
        else
        {
            cout<<b%a<<endl;
        }
    }
    return 0;
}