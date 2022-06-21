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
    vector<int> check;
    int x=1;
    while(x<1e10)
    {
        check.push_back(x);
        x*=2;
    }
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m=-9999999999999999;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                m=max(m,abs(arr[i]-arr[i+1]));
                arr[i+1]=arr[i];
            }
        }
        if(m==-9999999999999999)
        {
            cout<<0<<endl;
            continue;
        }
        
        auto it=lower_bound(check.begin(),check.end(),m+1);
        cout<<it-check.begin()<<endl;
    }
return 0;
}