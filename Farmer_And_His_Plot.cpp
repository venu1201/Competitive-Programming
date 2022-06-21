#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a ,long long int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m;
        cin>>n>>m;
    
    long long int x=gcd(n,m);
    cout<<((n/x)*(m/x))<<endl;
    }
    return 0;
}