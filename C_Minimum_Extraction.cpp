#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N=1e5+2;

int main()
{
    long long int a=1,b=3;
    while(1)
    {
        ll mid=(a+b)/2;
        cout<<mid;
        int large;
        cin>>large;
        if(large==1)
        {
            a=mid+1;
        }
        else
        {
            b=mid-1;
        }
    }
return 0;
}