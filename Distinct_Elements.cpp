#include<bits/stdc++.h>
using namespace std;
const long long int mod=1e9+7;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        
        map<long long int,long long int> mp;
        long long int x;
   for(long long int i=0;i<n;i++)
   {
       cin>>x;
       mp[x]++;
   }
   long long int ans=1;
   for(auto it:mp)
   {
       
       long long int temp=it.second+1;
       ans=(ans*temp)%mod;
   }
   ans=(ans-1)%mod;
   cout<<ans<<endl;;
    }
return 0;
}