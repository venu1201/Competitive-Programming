#include<bits/stdc++.h>
using namespace std;
bool com(pair<long long int,long long int> a,pair<long long int,long long int> b)
{
    if(a.first!=b.first)
    return a.first>b.first;
    else
    return a.second<b.second;
}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,x;
        cin>>n>>x;
        
        vector<long long int> arr;
        vector<pair<long long int,long long int>> brr;
        map<long long int,long long int> mp;
        map<long long int,long long int> mp2;
        for(long long int i=0;i<n;i++)
        {
            long long int h;
            cin>>h;
            arr.push_back(h);
            mp[h^x]++;
            mp2[h]++;
        }
        if(x==0)
        {
            long long int mm=-1;
            for(long long int i=0;i<n;i++)
            {
                if(mm<mp2[arr[i]])
                {
                    mm=mp2[arr[i]];
                }

            }
            cout<<mm<<" "<<"0"<<endl;
            continue;
        }
        long long int max=-1,res=-1;
        for(long long int i=0;i<n;i++)
        {
            brr.push_back(make_pair(mp[arr[i]]+mp2[arr[i]],mp[arr[i]]));
        }
        sort(brr.begin(),brr.end(),com);
    
        cout<<brr[0].first<<" "<<brr[0].second<<endl;
        
    }
    return 0;
}