#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,w,r,check=0;
        cin>>n>>w>>r;
        map<long long int,long long int> mp;
        set<long long int> s;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            mp[x]++;
            s.insert(x);
        }
        if(r>=w)
        {
            cout<<"YES"<<endl;
            continue;
        }
        auto it=s.begin();
        while(it!=s.end())
        {
            if(mp[*it]>=2)
            {
                r+=2*(mp[*it]/2)*(*it);
            }
            it++;
            if(r>=w)
            {
                check=1;
            }
        }
        if(check==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}