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
        int ans=n-1;
        for (int i=1; i<=sqrt(n); i++)
        {
        if (n%i == 0)
        {
            
            if (n/i == i)
                ans=0;
 
            else 
                ans=min(ans,abs(i-n/i));
        }
        }
    cout<<ans<<endl;
    }
return 0;
}