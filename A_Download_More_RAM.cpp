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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> arr;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            arr.push_back(make_pair(a[i],b[i]));
        }
        sort(arr.begin(),arr.end());
        
        int sum=k;
        for(int i=0;i<n;i++)
        {
            if(arr[i].first<=sum)
            {
                sum+=arr[i].second;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}