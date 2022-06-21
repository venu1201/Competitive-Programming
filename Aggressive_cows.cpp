#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,c;
        cin>>n>>c;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int m=arr[n-1]-arr[0];
        long long int l=0,r=n-1;
        while(l<=r)
        {
            long long int mid=(l+r)/2;
            if(abs(arr[l]-arr[mid])>abs(arr[r]-arr[mid]))
            {
                m=max(m,abs(arr[l]-arr[mid]));
                
            }
            else
            {
                 m=max(m,abs(arr[r]-arr[mid]));
            }

        }
    }
return 0;
}