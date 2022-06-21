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
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2)
        {
            cout<<1<<endl;
        }
        else
        {
            n-=2;
            if(n%x==0)
            {
                cout<<(n/x)+1<<endl;
            }
            else
            {
                cout<<ceil((double)(n)/(double)(x))+1<<endl;
            }
        }
    }
return 0;
}