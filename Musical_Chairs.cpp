#include<bits/stdc++.h>
using namespace std;
long long int calculate(long long int n)
{
  long long int count=0;
  for(long long int i=1;i<=sqrt(n);i++)
  {
     if(n%i==0)
     {
        if(n/i==i)
          count++;
       else
          count+=2;
     }
  }
  return count;
}
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
        cout<<calculate(n-1)<<endl;
    }
return 0;
}