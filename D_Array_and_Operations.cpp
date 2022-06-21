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
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int sum=0;
        long long int x,y;
        x=n-2*k;
        y=x+k;
        long long int z=x;
        
        while(k--)
        {
           
            sum+=arr[x]/arr[y];
            x++;
            y++;
        }
        for(int i=0;i<z;i++)
        {
        
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
return 0;
}