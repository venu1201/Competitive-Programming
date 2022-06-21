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
     n--;
     
     int x=n/2;
     int y=n-x;
     if(n%2==0)
     {
         if(x%2==0 && y%2==0)
         {
             x--;
             y++;
         }
         else
         {
             x-=2;
             y+=2;
         }
     }
    
     cout<<x<<" "<<y<<" "<<1<<endl;
    }
return 0;
}