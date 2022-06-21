#include<bits/stdc++.h>
using namespace std;
bool com(pair<int,int> &a,pair<int,int> &b)
{
    double r1 = (double)a.first / (double)a.second;
    double r2 = (double)b.first / (double)b.second;
    return r1 > r2;
}
int main()
{
    double n,w;
    cin>>n>>w;
     vector<pair<int,int>> ar(n);
        for(int i=0;i<n;i++)
        {
           long long int x;
           cin>>x;
           ar[i].first=x;
        }
         for(int i=0;i<n;i++)
        {
           long long int x;
           cin>>x;
           ar[i].second=x;
        }
        sort(ar.begin(),ar.end(),com);
        long double ans=0;
        for(int i=0;i<n && w!=0;i++)
        {
            if(ar[i].second<w)
            {
                w=w-ar[i].second;
                ans+=ar[i].first;
            }
            else
            {
                double l=(double)ar[i].first/(double)ar[i].second;
                ans+=l*w;
                w=0;
            }
        }
        cout.precision(6);
        cout<<fixed<<ans<<endl;
        return 0;
}