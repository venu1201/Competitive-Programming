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
        map<long long int,long long int> mp;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            mp[x]++;
        }
        long long int count=0,i=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            count+=(it->second)*(mp.size()-i-1);
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}