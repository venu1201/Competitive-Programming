#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        map<long long int,long long int> mp;
        mp[0]=1;
        long long int res=1,sum=1;
        for(long long int i=1;i<40;i++)
        {
            mp[sum]=res;
            res=res*2;
            sum=sum+res;
        }
        long long int n;
        cin>>n;
        long long int ans=0;
        for(auto it: mp)
        {
            if(it.first>=n+1)
            {
                break;
            }
            else
            {
                ans+=it.second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}