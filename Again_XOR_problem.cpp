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
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==1)
        {
            if(count(str.begin(),str.end(),'1')%2==1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            continue;
        }
        int x=0,y=n-k;
        int cnt=0;
        int ans=0;
        for(int i=x;i<=y;i++)
        {
            if(str[i]=='1')
            {
                cnt++;
            }
        }
        if(cnt%2==1)
        {
            ans++;
        }   
        while(y!=n-1)
        {
            if(str[x]=='1')
            {
                cnt--;
            }
            x++;
            y++;
            if(str[y]=='1')
            {
                cnt++;
            }
            if(cnt%2==1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;

    }
return 0;
}