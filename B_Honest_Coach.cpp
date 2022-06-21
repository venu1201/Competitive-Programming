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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int m=999999999999999;
        for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])<m)
            {
                m=abs(arr[i]-arr[i+1]);
            }
        }
        cout<<m<<endl;
    }
return 0;
}