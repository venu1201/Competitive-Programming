#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int T;
cin>>T;
while(T--)
{
       long long int n;
      cin>>n;
      long long int ans=1;
      long long int mod=1e9+7;

      for(long long int i=3;i<=2*n;i++)
      {
        ans=(ans*i)%mod;;
      }
      
      ans=(ans)%mod;

      cout<<ans<<"\n";
      
}
return 0;
}