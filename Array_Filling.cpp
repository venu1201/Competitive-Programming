#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

long long int lcm(long long int a,long long int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m,sum=0;
        cin>>n>>m;
        vector<pair<long long int,long long int>> v;
        vector<long long int> arr;
        vector<long long int> a;
        
        for(long long int i=0;i<m;i++)
        {
            long long int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
            
        }
        sort(v.begin(),v.end());
        sum+=(n-(n/v[m-1].second))*v[m-1].first;
        long long int x=n/v[m-1].second,h=x*v[m-1].second;
        long long int st=v[m-1].second;
        if(m>=2)
        {
            for(long long int i=m-2;i>=0;i--)
            {
                long long int l=lcm(st,v[i].second);
                if(l>h)
                {
                    sum+=x*v[i].first;
                    break;
                }
                
                sum+=(x-h/l)*v[i].first;
                x=h/l;
                st=l;
                h=x*l;
                if(x==0)
                break;
                

            }
        }
        
        
        
        cout<<sum<<"\n";
        
        
    }
    
    return 0;
}